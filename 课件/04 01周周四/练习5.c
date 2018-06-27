/*
**输入若干（不多于10）个字符串，每个字符串长度不超过80个字符，
**输入空字符串表示输入结束，然后按从小到大的顺序输出这些字符串
**（不包括表示输入结束的空字符串）。
*/

#include <stdio.h>
#include  <string.H>
main( )
{   
	char  a[11][81], t[81];
	int  i, j, k, n;
	for (n=0; n<11; n++)        /* 输入若干字符串 */
	{   
		gets(a[n]);
		if (strcmp(a[n], "")==0)     /* 如为空字符串 */
			break;                   /* 则结束输入    */
	}

	for (i=0; i<n-1; i++)                     /* 选择法排序 */
	{  
		for (k=i, j=i+1; j<n; j++)
			if (strcmp(a[k],a[j])>0)
				k=j;
		if (k!=i)
		{ 
			strcpy(t,a[i]);
			strcpy(a[i],a[k]);
			strcpy(a[k],t); 
		}
	}
	for (i=0; i<n; i++)   /* 按从小到大顺序输出各字符串 */
		puts(a[i]);
}