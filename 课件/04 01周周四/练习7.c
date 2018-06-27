/*
**从键盘输入两个字符串，将这两个字符串连接合并成一新字符串，两个字符串间
**要加入减号字符'-'，然后输出该新字符串。连接合并的规则是：如果两者长度
**不相等，则短者在前，长者在后；否则再比较两者的大小，小者在前，大者在后。
**如果两者完全相同，则前后随意。
**
*/

#include  <stdio.h>
#include  <string.h>

main( )
{  
	char  s1[81], s2[81], s3[200];
	int  first=1;                     /* first初始化为字符串s1在前 */
	gets(s1);                         /* 输入字符串s1*/
	gets(s2);                         /* 输入字符串s2 */
	if (strlen(s1) > strlen(s2))    /* 如果s2短,则标识s2在前 */
		first=2;
	else if((strlen(s1)==strlen(s2))&&(strcmp(s1, s2)>0))
		first=2;           /* 如果长度相等且s2小,则标识s2在前 */ 
	if (first==1)    /* 按first的标识，将s1和s2连接合并成s3 */
	{   
		strcpy(s3, s1);
		strcat(s3,"-");
		strcat(s3, s2);
	}
	else
	{   
		strcpy(s3, s2);
		strcat(s3, "-");
		strcat(s3, s1);
	}
	puts(s3);         /* 输出s1和s2连接合并成的字符串s3 */
}

