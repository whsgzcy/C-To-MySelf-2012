#include <stdio.h>

main()
{
	
	FILE *fp_file = NULL; /*�ļ�ָ��*/
	char sz_file_name[256] = {0}; /*�ļ���*/
	
	printf("�������ļ���:\n");
	gets(sz_file_name); /*�����ļ���*/

	fp_file = fopen(sz_file_name, "w"); /*���ļ�*/
	if (NULL == fp_file)
	{
		printf("�ļ�����ʧ��\n");
	}
	else
	{
		printf("�ļ��򿪳ɹ�\n");
		
		fprintf(fp_file, "%s %d", "test", 1);

		printf("�ļ�д�����\n");
		fclose(fp_file);
	}

	getchar();
}



