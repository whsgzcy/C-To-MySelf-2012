/*
* PPT_�ṹ����� ��7ҳ 
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
	//����ṹ���飬��СΪ10����10��ѧ��
	struct student stu[10];
	int i = 0,count = 0;
	float avg,sum = 0;
	//¼��ѧ����Ϣ
	for(i=0;i<10;i++)
	{
		stu[i].num = 100 + i;
		stu[i].sex = 'm';//Ĭ��Ϊ��
		stu[i].age = i;
		printf("������������������");
		scanf("%s %f",stu[i].name,&stu[i].score);
	}
	//����ƽ���ɼ��Ͳ����������
	for(i=0;i<10;i++)
	{
		sum += stu[i].score;
		if(stu[i].score<60)
		{
			count += 1;
		}
	}
	avg = sum/10;
	//�����Ϣ
	printf("�ܷ֣�%f\n",sum);
	printf("ƽ���֣�%f\n",avg);
	printf("������������%d\n",count);

	getch();
}