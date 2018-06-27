/*
* PPT_结构体操作 第7页 
*/


//结构体声明
struct student
{
	int num;       //学号
	char name[20]; //姓名
	char sex;      //性别
	int age;       //年龄
	float score;   //分数
};

void main()
{
	//定义结构数组，大小为10，即10个学生
	struct student stu[10];
	int i = 0,count = 0;
	float avg,sum = 0;
	//录入学生信息
	for(i=0;i<10;i++)
	{
		stu[i].num = 100 + i;
		stu[i].sex = 'm';//默认为男
		stu[i].age = i;
		printf("请输入姓名、分数：");
		scanf("%s %f",stu[i].name,&stu[i].score);
	}
	//计算平均成绩和不及格的人数
	for(i=0;i<10;i++)
	{
		sum += stu[i].score;
		if(stu[i].score<60)
		{
			count += 1;
		}
	}
	avg = sum/10;
	//输出信息
	printf("总分：%f\n",sum);
	printf("平均分：%f\n",avg);
	printf("不及格人数：%d\n",count);

	getch();
}