/*
**�Ӽ�������һ���ַ�����������80���ַ����������е������ַ���ԭ˳�����һ��
**���ַ����������е�Ӣ����ĸ���ô�д��ԭ˳�������һ�����ַ��������������
**�����ַ�����ÿ��һ�С���ԭ����û�������ַ���û��Ӣ����ĸ��ҲҪ����
**"There are no digits."��"There are no letters."��
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