#include <stdio.h>
void get_value(int i_num, int* p_up, int* p_low)
{
	int tmp = i_num;
	*p_low = i_num % 10;
	while (tmp > 10)
	{
		tmp = tmp / 10;
	}
	*p_up = tmp;
}
main()
{
	int a, i_up, i_low;
	scanf("%d", &a);
	get_value(a, &i_up, &i_low);
	printf("%d:%d %d", a, i_up, i_low);

	system("pause");
}

