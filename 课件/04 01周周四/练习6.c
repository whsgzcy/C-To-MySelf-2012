/*
**从键盘输入一个字符串（不多于80个字符），将其中的数字字符按原顺序组成一个
**新字符串，将其中的英文字母都用大写按原顺序组成另一个新字符串，再输出这两
**个新字符串，每个一行。如原串中没有数字字符或没有英文字母，也要报告
**"There are no digits."或"There are no letters."。
*/

#include  "stdio.h"

main( )
{  
	char s[81], sa[81]={0}, sn[81]={0};   
	int  i, j, k;
	printf("Input a string:\n");
	gets(s);
	for (i=j=k=0; s[i]; i++)
	{
		if (s[i]>='0'&&s[i]<='9')
            sn[j++]=s[i];
		else if (s[i]>='a'&&s[i]<='z')
			sa[k++]=s[i]-32; 
		else if (s[i]>='A'&&s[i]<='Z')
			sa[k++]=s[i];
	}
	if (j==0)  
		puts("There are no digits.");
	else    
		puts(sn);
	if(k==0) 
		puts("There are no letters.");
	else  
		puts(sa);
}