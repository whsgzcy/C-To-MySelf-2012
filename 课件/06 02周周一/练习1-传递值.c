#include <stdio.h>
void swap(int , int);

main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	swap(&x, &y);
	printf("%d %d\n", x, y);

	system("pause");
}

void swap(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}


