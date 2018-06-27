#include <stdio.h>
main()
{
	char c;
	int k;
	printf("input k:");
	scanf("%d", &k);
	getchar();
	
	printf("input one line character:\n");
	do 
	{
		c = getchar();
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			c = c + k;
		}
		putchar(c);
	} while (c != '\n');

	system("pause");
}