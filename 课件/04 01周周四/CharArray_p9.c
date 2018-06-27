#include<stdio.h>
#define N 6
main()
{
	char c[N];
	int i=0;
	for(; i<N; c[i]=getchar(), i++);
	for(i=0;i<N;i++)
		putchar(c[i]);
	printf("\n");
}