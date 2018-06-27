typedef int SElemType; // ����ջԪ������Ϊ����
#include<stdio.h>
#include<string.h>
#include<malloc.h> // malloc()��
#include<ctype.h>
#include<process.h> // exit()
#include<math.h>
#include<stdlib.h> 

#define STACK_INIT_SIZE 100 // �洢�ռ��ʼ������
#define STACKINCREMENT 2 // �洢�ռ��������
#define MAX 20

struct SqStack// ջ��˳��洢��ʾ �� �ȹ���һ��ջ�Ľṹ��
{
 SElemType *base; // ��ջ����֮ǰ������֮��base��ֵΪNULL
 SElemType *top; // ջ��ָ��
 int stacksize; // ��ǰ�ѷ���Ĵ洢�ռ䣬��Ԫ��Ϊ��λ
}; 

int InitStack(SqStack &S)//�ٹ���һ����ջS
{
 if(!(S.base=(int *)malloc(STACK_INIT_SIZE*sizeof(int))))
  exit(0); //�洢����ʧ��
 S.top=S.base;
 S.stacksize=STACK_INIT_SIZE;
 return 1;
}


int StackEmpty(SqStack S)
{ // ��ջSΪ��ջ���򷵻�1�����򷵻�0
 if(S.base==S.top)
  return 1;
 else
  return 0;
}

int Push(SqStack &S,int e)//��ջ ����Ԫ��eΪ�µ�ջ��Ԫ��
{
 if(S.top-S.base>=S.stacksize) // ջ����׷�Ӵ洢�ռ�
 {
  S.base=(int *)realloc(S.base,(S.stacksize+STACKINCREMENT)*sizeof(int));
  if(!S.base)
   exit(0); // �洢����ʧ��
  S.top=S.base+STACKINCREMENT;
 }
 *(S.top)++=e;
 return 1;                                
}


int Pop(SqStack &S,int &e)//��ջ
{ // ��ջ���գ���ɾ��S��ջ��Ԫ�أ���e������ֵ��������1�����򷵻�0
 if(S.top==S.base)
  return 0;
 e=*--S.top;
 return 1;
}

void main()
{ // �������������һ���Ǹ�ʮ������������ӡ��������ֵ�Ķ�������
 SqStack s;
 unsigned n; // �Ǹ�����
 SElemType e;
 InitStack(s); // ��ʼ��ջ
 printf("������һ���Ǹ�ʮ��������n:");
 printf("n=");
    scanf("%u",&n); // ����Ǹ�ʮ��������n
printf("ת���Ķ�����Ϊ��");
    while(n) // ��n������0
 {
  Push(s,n%2); // ��ջn����2������(2���Ƶĵ�λ)
  n=n/2;
 }
 while(!StackEmpty(s)) // ��ջ����
 {
  Pop(s,e); // ����ջ��Ԫ���Ҹ�ֵ��e
  printf("%d",e); // ���e
 }
 printf("\n");
}

