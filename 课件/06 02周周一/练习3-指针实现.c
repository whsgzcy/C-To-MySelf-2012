#include <stdio.h>
void func_pointer()
{
	int *p, *tmp; // p->δ֪ tmp->δ֪
	int i, _cout;
	printf("������ͬѧ������:\n");
	scanf("%d", &_cout);
	p = malloc(_cout * sizeof(int)); // ��p��̬����ռ䣬ע�����ռ�Ĵ�С
	printf("������ͬѧ�ǵĳɼ�:\n");
	tmp = p; // ��ʱָ��
	for (i = 0; i < _cout; i++)
	{
		scanf("%d", tmp++); // ʹ��ָ�뱣������
	}
	tmp = p; // ��ʱָ������ָ��p��ʼ��
	printf("ͬѧ�ǵĳɼ���:\n");
	for (i = 0; i < _cout; i++)
	{
		printf("%d ", *tmp++);
	}
	free(p); // �ͷ�p�Ŀռ�
	p = NULL; // �����ΪҰָ��
	tmp = NULL;
}
main()
{
	func_pointer();

	system("pause");
}

