#include <stdio.h>

main()
{
	FILE *fp_file = NULL;
	char sz_file_name[256] = {0};
	printf("������Ҫ�򿪵��ļ���:\n");
	gets(sz_file_name);

	fp_file = fopen(sz_file_name, "r");
	if (NULL == fp_file)
	{
		printf("��ʧ�ܣ�����ļ��Ƿ����\n");
	}
	else
	{
		printf("�ļ��򿪳ɹ�\n");
		fclose(fp_file);
	}

	getchar();
}



