#include <stdio.h>
main()
{
	int i, a[10], max, p = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 1; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			p = i;
		}
	}
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\nmax:a[%d] %d", p, max);
	
	system("pause");
}



