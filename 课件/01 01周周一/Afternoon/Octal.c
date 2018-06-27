#include <stdio.h>
void main()
{
    int x; 
    printf("\ninput data:");
    scanf("%d", &x);
    printf("The result is : \n");
    while (x)
    {
        printf("%d", x % 8);
        x /= 8;
    }
	printf("\n");
}