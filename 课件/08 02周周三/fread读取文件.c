#include <stdio.h>

main()
{
	
	FILE *fp_file = NULL; /*文件指针*/
	char sz_file_name[256] = {0}; /*文件名*/
	char str[11] = {0};
	
	printf("请输入文件名:\n");
	gets(sz_file_name); /*输入文件名*/

	fp_file = fopen(sz_file_name, "r"); /*打开文件*/
	if (NULL == fp_file)
	{
		printf("文件打开失败\n");
	}
	else
	{
		printf("文件打开成功\n");
		
		fread(str, sizeof(char), 10, fp_file);
		printf("%s", str);

		printf("文件读取完成\n");
		fclose(fp_file);
	}

	getchar();
}



