#include <stdio.h>
main()
{
	char c;
	int upper = 0, lower = 0, digit = 0;
	printf("please input:");
	while ((c = getchar()) != '\n')
	{
		if (c >= 'A' && c <= 'Z')
			upper++;
		if (c >= 'a' && c <= 'z')
			lower++;
		if (c >= '0' && c <= '9')
			digit++;
	}
	printf("upper=%d,lower=%d,digit=%d\n", upper, lower, digit);

	system("pause");
}