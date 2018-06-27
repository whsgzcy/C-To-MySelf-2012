#include <stdio.h>
void input(int a[10], int n)
{
	int i; 
	printf("\nPlease input %d numbers: \n", n);
	for(i = 0; i < n; i++)
		scanf("%d", &a[i]);
	printf("\n");
}

int maxa(int a[10], int n)
{
	int i; 
	int m; 
	m = a[0];
	for(i = 0; i < n; i++)
		if (m < a[i]) 
			m = a[i];
	return m;
}

void print(int a[10], int n)
{
	int i;
	for(i = 0; i < n; i++)
		printf("%4d", a[i]);
	printf("\n");
}

void main()
{
	int b[10]; 
	int max;

	input(b, 10);
	max = maxa(b, 10);

	printf("\n Array max is %d \n", max);
	printf("The array is : \n");
	print(b, 10);
}