#include <stdio.h>

main( )
{
	char str1[50],str2[20];
	int i,j;
	printf("Enter string No. 1:\n");
	scanf("%s",str1);
	printf("Enter string No. 2:\n");
	scanf("%s",str2);
	i = j = 0;
	while(str1[i] != '\0')i++;
	str1[i++] = ' ';
	while((str1[i++]=str2[j++]) != '\0');
	printf("string No. 1->%s\n",str1);
}
