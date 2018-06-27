/*
* PPT_结构体操作 第6页 
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
	//定义结构变量
	struct student stu1;
	//学号赋值
	stu1.num = 110;
	//输入姓名
	printf("请输入姓名：");
	scanf("%s",stu1.name);
	getchar();
	//年龄赋值
	stu1.age = 25;	
	//输入性别、分数
	printf("请输入性别、分数：");	// m 60   
	scanf("%c %f",&stu1.sex,&stu1.score);
	//输入学生信息
	printf("学号：%d\n姓名：%s\n",stu1.num,stu1.name);
	printf("性别：%c\n年龄：%d\n分数：%f",stu1.sex,stu1.age,stu1.score);

	getch();
}