#include <stdio.h>

main()
{
	
	FILE *fp_file = NULL; /*�ļ�ָ��*/
	char sz_file_name[256] = {0}; /*�ļ���*/
	
	printf("������Ҫ�������ļ���:\n");
	gets(sz_file_name); /*�����ļ���*/

	fp_file = fopen(sz_file_name, "w"); /*���ļ�*/
	if (NULL == fp_file)
	{
		printf("�ļ�����ʧ��\n");
	}
	else
	{
		printf("�ļ������ɹ�\n");
		fclose(fp_file);
	}

	getchar();
}



