#include <stdio.h>

main( )
{
	char a[20],b[20];
	int i;
	printf("Enter a string:\n");
	scanf("%s",a);
	i=0;
	do{
		b[i]= (a[i] >= 'a' && a[i] <='z') ? a[i]-'a'+'A' : a[i];
	}while(a[i++] != '\0');
	printf("String:\n%s\n", a);
	printf("Copyed string:\n%s\n",b);
}