/*
* PPT_结构体操作 第14页 
*/
#include <stdlib.h>
#include <string.h>

//结构体声明（简单起见，删除个别数据信息）
struct student
{
	int num;       //学号
	char name[20]; //姓名	
	float score;   //分数

	//指针域，指向student类型结构的指针变量 
	struct student *next;  
};

//创建链表
struct student* creat()
{
	struct student *head = NULL;//表头
	struct student *pnew = NULL;//新建结点	
	struct student *pend = NULL;//表尾结点	
		
	//创建一个新结点 pnew
	pnew = (struct student*)malloc(sizeof(struct student));	
	//读入第一个结点的学生数据
	printf("请输入学号、姓名、成绩：");
	scanf("%d %s %f",&pnew->num,pnew->name,&pnew->score);
	pend = pnew;//表尾pend也指向pnew

	while(pnew->num != 0)//假设num=0表示输入结束
	{
		if(head == NULL) head = pnew;//第一个新建结点为表头
		else pend->next = pnew;//原表尾的下一个结点为新建结点

		pend = pnew;//新建结点成为表尾

		//创建一个新结点 pnew
		pnew = (struct student*)malloc(sizeof(struct student));	
		//读入第一个结点的学生数据
		printf("请输入学号、姓名、成绩：");
		scanf("%d %s %f",&pnew->num,pnew->name,&pnew->score);	
	}
	free(pnew);//对于num=0的结点，未加入链表，删除其空间
	pend->next = NULL;//输入结束，表尾结点的下一个结点为空

	return head;//返回表头指针
}

//输出链表
void print(struct student *head)
{
	struct student *p;//指向要输出的结点
	p = head;//指向第一个结点
	if(p == NULL) return;//空表
	printf("\n学号\t姓名\t成绩\n");
	do
	{
		printf("%d\t%s\t%f\n",p->num,p->name,p->score);
		p = p->next;//指向下一个结点
	}while(p != NULL);
}

//计算平均分
float get_avg_score(struct student *head)
{
	float sum=0;
	int count = 0;
	struct student *p;//指向要输出的结点
	p = head;//指向第一个结点	
	if(p == NULL) 0;//空表	
	do
	{
		sum += p->score;
		count += 1;
		p = p->next;//指向下一个结点
	}while(p != NULL);
	
	return sum/count;
}

//统计及格人数
int get_pass_count(struct student *head)
{	
	int count = 0;
	struct student *p;//指向要输出的结点
	p = head;//指向第一个结点	
	if(p == NULL) 0;//空表	
	do
	{
		if(p->score>=60)
		{
			count += 1;
		}
		p = p->next;//指向下一个结点
	}while(p != NULL);
	
	return count;
}

void main()
{	
	//定义链表头指针
	struct student *head = NULL;
	//创建链表
	head = creat();
	//输出链表
	print(head);
	//输出平均分
	printf("平均分：%f\n",get_avg_score(head));
	//输出及格人数
	printf("及格人数：%d\n",get_pass_count(head));

	getch();
}