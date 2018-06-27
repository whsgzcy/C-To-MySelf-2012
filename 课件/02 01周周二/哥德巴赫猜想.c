#include <stdio.h>
#include <math.h>

//素数判断
int is_prime(int num)
{
	int n = 0;

	if (num < 2)
	{
		printf("输入错误\n");
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

//一个数是否能够分解成2个素数
int is_resolve(int num)
{
	int j = 0;

	if (num < 4)
	{
		printf("输入错误\n");
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

	printf("---哥德巴赫猜想---\n");
	printf("请输入偶数验证上限：\n");
	scanf("%d", &nmax);
	if (nmax < 4)
	{
		printf("输入整数必须不小于4");
	}

	for (i = 4; i < nmax; i += 2)
	{
		if (is_resolve(i) != 1)
		{
			printf("数据%d验证失败!\n", i);
			return 0;
		}

		if (i % 1000 == 0)
		{
			printf("%d以内验证完成\n", i);
		}
	}

	printf("验证成功\n");
	
	return 0;
}