#include <stdio.h>
void func_pointer()
{
	int *p, *tmp; // p->未知 tmp->未知
	int i, _cout;
	printf("请输入同学的人数:\n");
	scanf("%d", &_cout);
	p = malloc(_cout * sizeof(int)); // 给p动态分配空间，注意分配空间的大小
	printf("请输入同学们的成绩:\n");
	tmp = p; // 临时指针
	for (i = 0; i < _cout; i++)
	{
		scanf("%d", tmp++); // 使用指针保存输入
	}
	tmp = p; // 临时指针重新指向p开始处
	printf("同学们的成绩是:\n");
	for (i = 0; i < _cout; i++)
	{
		printf("%d ", *tmp++);
	}
	free(p); // 释放p的空间
	p = NULL; // 避免成为野指针
	tmp = NULL;
}
main()
{
	func_pointer();

	system("pause");
}

