#include <stdio.h>

main()
{
	FILE *fp_file = NULL;
	char sz_file_name[256] = {0};
	printf("请输入要打开的文件名:\n");
	gets(sz_file_name);

	fp_file = fopen(sz_file_name, "r");
	if (NULL == fp_file)
	{
		printf("打开失败，检查文件是否存在\n");
	}
	else
	{
		printf("文件打开成功\n");
		fclose(fp_file);
	}

	getchar();
}



