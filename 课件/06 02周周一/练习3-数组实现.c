#include <stdio.h>
void func_array()
{
	int arr[10000];
	int i, _count;
	printf("请输入同学的人数:\n");
	scanf("%d", &_count);
	printf("请输入同学们的成绩:\n");
	for (i = 0; i < _count; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("同学们的成绩是:\n");
	for (i = 0; i < _count; i++)
	{
		printf("%d", arr[i]);
	}
}
main()
{
	func_array();

	system("pause");
}

