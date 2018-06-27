/*  题目：在二维数组a中选出各行最大的元素组成一个一维数组b
**
**  编程思路：在数组A的每一行中寻找最大的元素，找到之后把该值赋予数组B相应的元素即可
**
*/

#include <STDIO.H>

main()
{
	static int a[][4]={3,16,87,65,4,32,11,108,10,25,12,27};
	int b[3],i,j,l;
	
	for(i=0;i<=2;i++)
	{ 
		l=a[i][0];
		for(j=1;j<=3;j++)
			if(a[i][j]>l) l=a[i][j];
		b[i]=l;
	}

	printf("\n array a:\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=3;j++)
			printf("%5d",a[i][j]);
		printf("\n");
	}

	printf("\n array b:\n");
	for(i=0;i<=2;i++)
	{
		printf("%5d",b[i]);
		printf("\n");
	}
}
