/*
**输出一个钻石图
*/

#include <stdio.h>

main(  )
{
	char diamond[][5]={{' ',' ','*'},
						{' ','*',' ','*'},
						{'*',' ',' ',' ','*'},
						{' ','*',' ','*'},
						{' ',' ','*'} };
	int i,j;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
			printf("%c",diamond[i][j]);
		printf("\n");
	}
}
