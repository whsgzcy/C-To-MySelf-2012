#include <stdio.h>

main()
{
	
	FILE *fp_file = NULL; /*�ļ�ָ��*/
	char sz_file_name[256] = {0}; /*�ļ���*/
	char str[27] = "abcdefghijklmnopqrstuvwxyz";
	
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
		
		fwrite(str, strlen(str), 1, fp_file);

		printf("�ļ�д�����\n");
		fclose(fp_file);
	}

	getchar();
}



