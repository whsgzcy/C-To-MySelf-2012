/*  ��Ŀ����һ���������е����Ͷ�ά�����в��ҵ�һ�����ֵĸ���
**
**  �㷨Ҫ�㣺������Ƕ�׵�forѭ������������Ԫ�أ��ж��Ƿ�Ϊ������
**	     ���ҵ���һ������ʱ��Ӧ���˳�ѭ����Ϊ�ˣ�Ӧ����һ����Ǳ�����
**	     ���ڱ���ҵ�����״̬�����ҽ��˱�Ǽ���ѭ�����������У��Կ�
**	     ��ѭ�����ʵ�ʱ���˳���
*/

# include <stdio.h>

main()
{
	int i,j,found,num[3][4];
	printf("Enter 12 integers: \n");
	for (i=0; i<3; i++)
		for (j=0; j<4; j++)
			scanf("%d", &num[i][j]);

	found = 0;
	for (i=0; i<3 && !found; i++)
		for (j=0; j<4 && !found; j++)
			found = num[i][j]<0;
	if (!found)
		printf("not found\n");
	else
		printf("minus number num[%d][%d]��%d\n",
				i-1,j-1,num[i-1][j-1]);
}
