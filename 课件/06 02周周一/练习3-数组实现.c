#include <stdio.h>
void func_array()
{
	int arr[10000];
	int i, _count;
	printf("������ͬѧ������:\n");
	scanf("%d", &_count);
	printf("������ͬѧ�ǵĳɼ�:\n");
	for (i = 0; i < _count; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("ͬѧ�ǵĳɼ���:\n");
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

