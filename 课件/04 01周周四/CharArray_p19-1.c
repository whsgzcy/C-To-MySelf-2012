#include <stdio.h>
#include <string.h>

void main(  ) 
{	
	char  a1[10]="china"; 
	int nLength = strlen(a1);
	printf("%d\n", nLength); 
	nLength = strlen("beijing\0wuhan");
	printf("%d\n", nLength); 
}