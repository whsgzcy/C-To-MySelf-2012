#include <stdio.h>

//ץС͵����
int main()
{
	//4��Ԫ�طֱ������ұ���4��
	//ֵΪ1����С͵��Ϊ0����
	int arr[4];	
	int i, j;

	printf("---ץС͵����---\n");
	//�о����п������
	for (i = 0; i < 4; i++)
	{
		/*����i������ΪС͵
		for (j = 0; j < 4; j++)
		{
			arr[j] = 0;
			arr[i] = 1;
		}
		*/
		arr[i] = 1;
		for (j = 0; j < 4; j++)
			if (i != j) arr[j] = 0;
		
		//�ж�
		if (arr[1] + arr[3] == 1
			&& arr[1] + arr[2] == 1
			&& arr[0] + arr[1] == 1)
		{
			if (arr[0] == 1)
			{
				printf("С͵�Ǽ�\n");
			}
			if (arr[1] == 1)
			{
				printf("С͵����\n");
			}
			if (arr[2] == 1)
			{
				printf("С͵�Ǳ�\n");
			}
			if (arr[3] == 1)
			{
				printf("С͵�Ƕ�");
			}
		}
	}

}