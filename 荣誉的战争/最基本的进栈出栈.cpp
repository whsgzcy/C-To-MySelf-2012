typedef int SElemType; // 定义栈元素类型为整型
#include<stdio.h>
#include<string.h>
#include<malloc.h> // malloc()等
#include<ctype.h>
#include<process.h> // exit()
#include<math.h>
#include<stdlib.h> 

#define STACK_INIT_SIZE 100 // 存储空间初始分配量
#define STACKINCREMENT 2 // 存储空间分配增量
#define MAX 20

struct SqStack// 栈的顺序存储表示 。 先构建一个栈的结构体
{
 SElemType *base; // 在栈构造之前和销毁之后，base的值为NULL
 SElemType *top; // 栈顶指针
 int stacksize; // 当前已分配的存储空间，以元素为单位
}; 

int InitStack(SqStack &S)//再构造一个空栈S
{
 if(!(S.base=(int *)malloc(STACK_INIT_SIZE*sizeof(int))))
  exit(0); //存储分配失败
 S.top=S.base;
 S.stacksize=STACK_INIT_SIZE;
 return 1;
}


int StackEmpty(SqStack S)
{ // 若栈S为空栈，则返回1，否则返回0
 if(S.base==S.top)
  return 1;
 else
  return 0;
}

int Push(SqStack &S,int e)//入栈 插入元素e为新的栈顶元素
{
 if(S.top-S.base>=S.stacksize) // 栈满，追加存储空间
 {
  S.base=(int *)realloc(S.base,(S.stacksize+STACKINCREMENT)*sizeof(int));
  if(!S.base)
   exit(0); // 存储分配失败
  S.top=S.base+STACKINCREMENT;
 }
 *(S.top)++=e;
 return 1;                                
}


int Pop(SqStack &S,int &e)//出栈
{ // 若栈不空，则删除S的栈顶元素，用e返回其值，并返回1；否则返回0
 if(S.top==S.base)
  return 0;
 e=*--S.top;
 return 1;
}

void main()
{ // 对于输入的任意一个非负十进制整数，打印输出与其等值的二进制数
 SqStack s;
 unsigned n; // 非负整数
 SElemType e;
 InitStack(s); // 初始化栈
 printf("请输入一个非负十进制整数n:");
 printf("n=");
    scanf("%u",&n); // 输入非负十进制整数n
printf("转换的二进制为：");
    while(n) // 当n不等于0
 {
  Push(s,n%2); // 入栈n除以2的余数(2进制的低位)
  n=n/2;
 }
 while(!StackEmpty(s)) // 当栈不空
 {
  Pop(s,e); // 弹出栈顶元素且赋值给e
  printf("%d",e); // 输出e
 }
 printf("\n");
}

