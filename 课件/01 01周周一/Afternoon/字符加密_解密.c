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
		if (c >= 'a' && c <= 'z')
		{
			c = c - k;
			c = c > 'a' ? c : 'z' + c - 'a';
		}
		if (c >= 'A' && c <= 'Z')
		{
			c = c - k;
			c = c > 'A' ? c : 'Z' + c - 'a';
		}
		putchar(c);
	} while (c != '\n');

	system("pause");
}