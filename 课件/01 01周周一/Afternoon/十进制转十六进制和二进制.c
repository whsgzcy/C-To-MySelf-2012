#include <stdio.h>
char to_hex(int n)
{
	if (n >= 10 && n <= 15)
	{
		return 'A' + n - 10;
	}
	return '0' + n;
}
void dec_to_hex(int n, char *sz_hex)
{
	int i = 0;
	int mod;
	while (n)
	{
		mod = n % 16;
		sz_hex[i++] = to_hex(mod);
		n = n / 16;
	}
	sz_hex[i] = '\0';
}

char to_bin(int n)
{
	return '0' + n;
}
void dec_to_binary(int n, char* sz_bina)
{
	int i = 0;
	int mod;
	while (n)
	{
		mod = n % 2;
		sz_bina[i++] = to_bin(mod);
		n = n / 2;
	}
	sz_bina[i] = '\0';
}

void revert(char *sz_numer, int i_count)
{
	int i, j;
	char tmp;
	for (i = 0, j = i_count - 1; i < i_count / 2; i++, j--)
	{
		tmp = sz_numer[i];
		sz_numer[i] = sz_numer[j];
		sz_numer[j] = tmp;
	}
}
main()
{
	int x, i_c, i; 
	char a[32] = {0};
	
    printf("\ninput data:");
    scanf("%d", &x);
	
	printf("\nin hex:");
	dec_to_hex(x, a);
	i_c = strlen(a);
	revert(a, i_c);
	for (i = 0; i < i_c; i++)
	{
		printf("%c", a[i]);
	}

	printf("\nin binary:");
	dec_to_binary(x, a);
	i_c = strlen(a);
	revert(a, i_c);
	for (i = 0; i < i_c; i++)
	{
		printf("%c", a[i]);
	}

	printf("\n");

	system("pause");
}