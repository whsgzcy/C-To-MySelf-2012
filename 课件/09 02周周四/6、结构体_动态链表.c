/*
* PPT_�ṹ����� ��12-13ҳ 
*/
#include <stdlib.h>
#include <string.h>

//�ṹ���������������ɾ������������Ϣ��
struct student
{
	int num;       //ѧ��
	char name[20]; //����	
	float score;   //����

	//ָ����ָ��student���ͽṹ��ָ����� 
	struct student *next;  
};

//��������
struct student* creat()
{
	struct student *head = NULL;//��ͷ
	struct student *pnew = NULL;//�½����	
	struct student *pend = NULL;//��β���	
		
	//����һ���½�� pnew
	pnew = (struct student*)malloc(sizeof(struct student));	
	//�����һ������ѧ������
	printf("������ѧ�š��������ɼ���");
	scanf("%d %s %f",&pnew->num,pnew->name,&pnew->score);
	pend = pnew;//��βpendҲָ��pnew

	while(pnew->num != 0)//����num=0��ʾ�������
	{
		if(head == NULL) head = pnew;//��һ���½����Ϊ��ͷ
		else pend->next = pnew;//ԭ��β����һ�����Ϊ�½����

		pend = pnew;//�½�����Ϊ��β

		//����һ���½�� pnew
		pnew = (struct student*)malloc(sizeof(struct student));	
		//�����һ������ѧ������
		printf("������ѧ�š��������ɼ���");
		scanf("%d %s %f",&pnew->num,pnew->name,&pnew->score);	
	}
	free(pnew);//����num=0�Ľ�㣬δ��������ɾ����ռ�
	pend->next = NULL;//�����������β������һ�����Ϊ��

	return head;//���ر�ͷָ��
}

//�������
void print(struct student *head)
{
	struct student *p;//ָ��Ҫ����Ľ��
	p = head;//ָ���һ�����
	if(p == NULL) return;//�ձ�
	printf("\nѧ��\t����\t�ɼ�\n");
	do
	{
		printf("%d\t%s\t%f\n",p->num,p->name,p->score);
		p = p->next;//ָ����һ�����
	}while(p != NULL);
}

void main()
{	
	//��������ͷָ��
	struct student *head = NULL;
	//��������
	head = creat();
	//�������
	print(head);

	getch();
}