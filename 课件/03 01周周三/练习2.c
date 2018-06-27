/*  题目：青年歌手参加歌曲大奖赛，有10个评委进行打分，试编程求
**        这位选手的平均得分（去掉一个最高分和一个最低分）。
**
**  分析：这道题的核心是排序。
**        将评委所打的10个分数利用数组按增序（或降序）排列，计
**        算数组中除第一个和最后一个分数以外的数的平均分，其中
**        排序部分这里用选择法实现。
*/

#include <stdio.h>

main()
{
	int i,j,min;
	float temp,ave=0;
	float a[11];

	printf("\n输入评委所打的分数：\n");
	for(i=1; i<=10; i++)
		scanf("%f", &a[i]);

	for(i=1; i<=9; i++)
	{
		min=i;
		for(j=i+1; j<=10; j++)
			if(a[min]>a[j])
				min=j;
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}

	for(i=2;i<=9;i++) /*注意i值的变化范围*/
		ave=ave+a[i];

	printf("选手所得最后分数：%6.1f",ave/8);
	printf("\n");
	for(i=1; i<=10; i++)
		printf("%6.3f", a[i]);
	printf("\n");

}

