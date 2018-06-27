#include <stdio.h>

int Average(int, int);

main()
{
	int a = 12;
	int b = 24;
	int ave = Average(a, b);	
	printf("Average of %d and %d is %d.\n", a, b, ave);
}

int Average(int x, int y)
{
	int result;
	result = (x + y) / 2;
	return result;
}
