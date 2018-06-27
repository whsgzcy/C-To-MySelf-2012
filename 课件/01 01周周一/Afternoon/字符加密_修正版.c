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
			c = c + k;
			c = c < 'z' ? c : 'a' + c - 'z';
		}
		if (c >= 'A' && c <= 'Z')
		{
			c = c + k;
			c = c < 'Z' ? c : 'A' + c - 'Z';
		}
		putchar(c);
	} while (c != '\n');

	system("pause");
}