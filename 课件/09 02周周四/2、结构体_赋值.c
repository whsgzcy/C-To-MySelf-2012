/*
* PPT_�ṹ����� ��6ҳ 
*/


//�ṹ������
struct student
{
	int num;       //ѧ��
	char name[20]; //����
	char sex;      //�Ա�
	int age;       //����
	float score;   //����
};

void main()
{
	//����ṹ����
	struct student stu1;
	//ѧ�Ÿ�ֵ
	stu1.num = 110;
	//��������
	printf("������������");
	scanf("%s",stu1.name);
	getchar();
	//���丳ֵ
	stu1.age = 25;	
	//�����Ա𡢷���
	printf("�������Ա𡢷�����");	// m 60   
	scanf("%c %f",&stu1.sex,&stu1.score);
	//����ѧ����Ϣ
	printf("ѧ�ţ�%d\n������%s\n",stu1.num,stu1.name);
	printf("�Ա�%c\n���䣺%d\n������%f",stu1.sex,stu1.age,stu1.score);

	getch();
}