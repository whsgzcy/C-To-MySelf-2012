/*
**  题目：求矩阵下三角形元素之和。
*/

#include <stdio.h>

#define N 6

main()
{
	int i,j,sum=0;
	int a[N][N]={0};

	printf("input 5×5 data:\n");
	for(i=1; i<N; i++)
	{ 
		printf("Input the %d line data:\n",i);
		for(j=1; j<N; j++)
			scanf("%d", &a[i][j]); 
	}

	for(i=1; i<N; i++)
	{
		for(j=1; j<N; j++)
		printf("%5d", a[i][j]);
		printf("\n"); 
	}

	for(i=1;i<N;i++)
		for(j=1;j<=i;j++)
			sum=sum+a[i][j];
	printf("sum=%d\n", sum);

}

