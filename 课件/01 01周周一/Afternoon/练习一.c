#include <stdio.h>
main()
{
	char sz_name[255] = {0};
	printf("你好！你是谁？\n");
	scanf("%s", sz_name);
	printf("欢迎你回来！%s\n", sz_name);

	system("pause");
}