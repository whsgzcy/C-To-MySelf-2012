#include <stdio.h>
void swap_value(int* p_n1, int* p_n2);
main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	swap_value(&a, &b);
	printf("%d %d", a, b);

	system("pause");
}
void swap_value(int* p_n1, int* p_n2)
{
	int tmp;
	tmp = *p_n1;
	*p_n1 = *p_n2;
	*p_n2 = tmp;
}

