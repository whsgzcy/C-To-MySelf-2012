#include <stdio.h>

//抓小偷问题
int main()
{
	//4个元素分别代表甲乙丙丁4人
	//值为1则是小偷，为0则不是
	int arr[4];	
	int i, j;

	printf("---抓小偷问题---\n");
	//列举所有可能情况
	for (i = 0; i < 4; i++)
	{
		/*将第i个人置为小偷
		for (j = 0; j < 4; j++)
		{
			arr[j] = 0;
			arr[i] = 1;
		}
		*/
		arr[i] = 1;
		for (j = 0; j < 4; j++)
			if (i != j) arr[j] = 0;
		
		//判断
		if (arr[1] + arr[3] == 1
			&& arr[1] + arr[2] == 1
			&& arr[0] + arr[1] == 1)
		{
			if (arr[0] == 1)
			{
				printf("小偷是甲\n");
			}
			if (arr[1] == 1)
			{
				printf("小偷是乙\n");
			}
			if (arr[2] == 1)
			{
				printf("小偷是丙\n");
			}
			if (arr[3] == 1)
			{
				printf("小偷是丁");
			}
		}
	}

}