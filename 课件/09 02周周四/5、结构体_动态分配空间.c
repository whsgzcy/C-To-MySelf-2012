/*
* PPT_�ṹ����� ��10ҳ 
*/
#include <stdlib.h>
#include <string.h>

//�ṹ������
struct student
{
	int num;       //ѧ��
	char name[20]; //����
	char sex;      //�Ա�
	int age;       //����
	float score;   //����
};

void print(struct student *pstu)
{
	printf("ѧ��:%d\t����:%s\t",pstu->num,pstu->name);
	printf("�Ա�%c\t�ɼ���%f\n",pstu->sex,pstu->score);
}

void main()
{	
	//����ṹָ�����
	struct student *pstu;
	
	//�����ڴ�ռ�
	pstu = (struct student*)malloc(sizeof(struct student));

	//��ʼ��
	pstu->num = 110;
	strcpy(pstu->name,"���");
	pstu->sex  = 'M';
	pstu->age = 25;
	pstu->score = 78.5;	
	
	//���ú��������Ϣ
	print(pstu);

	//�ͷ��ڴ�ռ�
	free(pstu);

	getch();
}