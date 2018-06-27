#include <stdio.h>
main()
{
	int j, i, n = 10;
	long t, sum = 0;
	for (j = 1; j <= n; j++)
	{
		t = 1;
		for (i = 1; i < j; i++)
		{
			t *= i;
		}
		sum += t;
	}
	printf("\n result is %ld.\n", sum);

	system("pause");
}