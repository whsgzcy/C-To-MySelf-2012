#include <stdio.h>
#include <math.h>

//�����ж�
int is_prime(int num)
{
	int n = 0;

	if (num < 2)
	{
		printf("�������\n");
		return -1;
	}

	if (num == 2)
	{
		return 1;
	}

	for (n = 2; n <= sqrt(num) + 1; n++)
	{
		if (num % n == 0)
		{
			return 0;
		}
	}

	return 1;
}

//һ�����Ƿ��ܹ��ֽ��2������
int is_resolve(int num)
{
	int j = 0;

	if (num < 4)
	{
		printf("�������\n");
		return -1;
	}

	for (j = 2; j <= num / 2; j++)
	{
		if(is_prime(j) == 1 && is_prime(num - j) == 1)
		{
			return 1;
		}
	}

	return 0;
}

int main()
{
	int nmax;
	int i;

	printf("---��°ͺղ���---\n");
	printf("������ż����֤���ޣ�\n");
	scanf("%d", &nmax);
	if (nmax < 4)
	{
		printf("�����������벻С��4");
	}

	for (i = 4; i < nmax; i += 2)
	{
		if (is_resolve(i) != 1)
		{
			printf("����%d��֤ʧ��!\n", i);
			return 0;
		}

		if (i % 1000 == 0)
		{
			printf("%d������֤���\n", i);
		}
	}

	printf("��֤�ɹ�\n");
	
	return 0;
}