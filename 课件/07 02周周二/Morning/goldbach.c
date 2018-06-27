#include <stdio.h>
#include <math.h>

/* º¯ÊýÉùÃ÷ */
int prime(int);
void even(int);

main()
{
	int n;
	printf("\nEnter an EVEN number (>=6): ");
	scanf("%d", &n);
	if(n % 2 == 0 && n >= 6)
		even(n);
	else
		printf("\nThe %d is not an even number.\n", n);
}

void even(int x)
{
	int i;
	for(i = 2; i <= x/2; i++)
		if(prime(i) && prime(x - i))
				printf("%d = %d + %d\n", x, i, x-i);
}

int prime(int n)
{
	int i, k = (int)sqrt(n);
	for(i = 2; i <= k; i++)
		if (n % i == 0) 
			return 0;
	return 1;
}