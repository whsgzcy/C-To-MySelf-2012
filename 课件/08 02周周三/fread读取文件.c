#include <stdio.h>

main()
{
	
	FILE *fp_file = NULL; /*�ļ�ָ��*/
	char sz_file_name[256] = {0}; /*�ļ���*/
	char str[11] = {0};
	
	printf("�������ļ���:\n");
	gets(sz_file_name); /*�����ļ���*/

	fp_file = fopen(sz_file_name, "r"); /*���ļ�*/
	if (NULL == fp_file)
	{
		printf("�ļ���ʧ��\n");
	}
	else
	{
		printf("�ļ��򿪳ɹ�\n");
		
		fread(str, sizeof(char), 10, fp_file);
		printf("%s", str);

		printf("�ļ���ȡ���\n");
		fclose(fp_file);
	}

	getchar();
}



