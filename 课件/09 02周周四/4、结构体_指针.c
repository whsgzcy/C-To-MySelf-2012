/*
* PPT_�ṹ����� ��8ҳ 
*/
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

void print_1(struct student stu)
{
	printf("ѧ��:%d\t����:%s\t",stu.num,stu.name);
	printf("�Ա�%c\t�ɼ���%f\n",stu.sex,stu.score);
}

void print_2(struct student *pstu)
{
	printf("ѧ��:%d\t����:%s\t",(*pstu).num,(*pstu).name);
	printf("�Ա�%c\t�ɼ���%f\n",(*pstu).sex,(*pstu).score);

	printf("ѧ��:%d\t����:%s\t",pstu->num,pstu->name);
	printf("�Ա�%c\t�ɼ���%f\n",pstu->sex,pstu->score);
}

void main()
{
	//����ṹ����
	struct student stu;
	//����ṹָ�����
	struct student *pstu;
	
	//��ʼ���ṹ����
	stu.num = 110;
	strcpy(stu.name,"���");
	stu.sex = 'M';
	stu.age = 25;
	stu.score = 78.5;
	
	//�ṹָ�������ֵ
	pstu = &stu;
	
	//�����Ϣ
	/*printf("ѧ��:%d\t����:%s\t",stu.num,stu.name);
	printf("�Ա�%c\t�ɼ���%f\n",stu.sex,stu.score);*/
	print_1(stu);

	/*printf("ѧ��:%d\t����:%s\t",(*pstu).num,(*pstu).name);
	printf("�Ա�%c\t�ɼ���%f\n",(*pstu).sex,(*pstu).score);

	printf("ѧ��:%d\t����:%s\t",pstu->num,pstu->name);
	printf("�Ա�%c\t�ɼ���%f\n",pstu->sex,pstu->score);*/	
	print_2(pstu);

	getch();
}