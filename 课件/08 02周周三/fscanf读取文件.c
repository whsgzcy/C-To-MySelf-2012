#include <stdio.h>

main()
{
	
	FILE *fp_file = NULL; /*�ļ�ָ��*/
	char sz_file_name[256] = {0}; /*�ļ���*/
	char str[50] = {0};
	int m;
	
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
		
		fscanf(fp_file, "%s %d", str, &m);
		printf("%s %d\n", str, m);

		printf("�ļ���ȡ���\n");
		fclose(fp_file);
	}

	getchar();
}



