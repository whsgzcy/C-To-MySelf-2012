/*
* PPT_结构体操作 第10页 
*/
#include <stdlib.h>
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

void print(struct student *pstu)
{
	printf("学号:%d\t姓名:%s\t",pstu->num,pstu->name);
	printf("性别：%c\t成绩：%f\n",pstu->sex,pstu->score);
}

void main()
{	
	//定义结构指针变量
	struct student *pstu;
	
	//分配内存空间
	pstu = (struct student*)malloc(sizeof(struct student));

	//初始化
	pstu->num = 110;
	strcpy(pstu->name,"彭飞");
	pstu->sex  = 'M';
	pstu->age = 25;
	pstu->score = 78.5;	
	
	//调用函数输出信息
	print(pstu);

	//释放内存空间
	free(pstu);

	getch();
}