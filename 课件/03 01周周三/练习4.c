/*  题目：从一个三行四列的整型二维数组中查找第一个出现的负数
**
**  算法要点：用两层嵌套的for循环来遍历数组元素，判断是否为负数。
**	     当找到第一个负数时就应该退出循环，为此，应定义一个标记变量，
**	     用于标记找到与否的状态，并且将此标记加入循环控制条件中，以控
**	     制循环在适当时候退出。
*/

# include <stdio.h>

main()
{
	int i,j,found,num[3][4];
	printf("Enter 12 integers: \n");
	for (i=0; i<3; i++)
		for (j=0; j<4; j++)
			scanf("%d", &num[i][j]);

	found = 0;
	for (i=0; i<3 && !found; i++)
		for (j=0; j<4 && !found; j++)
			found = num[i][j]<0;
	if (!found)
		printf("not found\n");
	else
		printf("minus number num[%d][%d]：%d\n",
				i-1,j-1,num[i-1][j-1]);
}
