/*
* PPT_结构体操作 第8页 
*/
#include <string.h>

//结构体声明
struct student
{
	int num;       //学号
	char name[20]; //姓名
	char sex;      //性别
	int age;       //年龄
	float score;   //分数
};

void print_1(struct student stu)
{
	printf("学号:%d\t姓名:%s\t",stu.num,stu.name);
	printf("性别：%c\t成绩：%f\n",stu.sex,stu.score);
}

void print_2(struct student *pstu)
{
	printf("学号:%d\t姓名:%s\t",(*pstu).num,(*pstu).name);
	printf("性别：%c\t成绩：%f\n",(*pstu).sex,(*pstu).score);

	printf("学号:%d\t姓名:%s\t",pstu->num,pstu->name);
	printf("性别：%c\t成绩：%f\n",pstu->sex,pstu->score);
}

void main()
{
	//定义结构变量
	struct student stu;
	//定义结构指针变量
	struct student *pstu;
	
	//初始化结构变量
	stu.num = 110;
	strcpy(stu.name,"彭飞");
	stu.sex = 'M';
	stu.age = 25;
	stu.score = 78.5;
	
	//结构指针变量赋值
	pstu = &stu;
	
	//输出信息
	/*printf("学号:%d\t姓名:%s\t",stu.num,stu.name);
	printf("性别：%c\t成绩：%f\n",stu.sex,stu.score);*/
	print_1(stu);

	/*printf("学号:%d\t姓名:%s\t",(*pstu).num,(*pstu).name);
	printf("性别：%c\t成绩：%f\n",(*pstu).sex,(*pstu).score);

	printf("学号:%d\t姓名:%s\t",pstu->num,pstu->name);
	printf("性别：%c\t成绩：%f\n",pstu->sex,pstu->score);*/	
	print_2(pstu);

	getch();
}