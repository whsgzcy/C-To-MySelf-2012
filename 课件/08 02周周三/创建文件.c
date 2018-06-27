#include <stdio.h>

main()
{
	
	FILE *fp_file = NULL; /*文件指针*/
	char sz_file_name[256] = {0}; /*文件名*/
	
	printf("请输入要创建的文件名:\n");
	gets(sz_file_name); /*输入文件名*/

	fp_file = fopen(sz_file_name, "w"); /*打开文件*/
	if (NULL == fp_file)
	{
		printf("文件创建失败\n");
	}
	else
	{
		printf("文件创建成功\n");
		fclose(fp_file);
	}

	getchar();
}



