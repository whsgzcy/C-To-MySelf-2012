#include <stdio.h>
#include <time.h>
main()
{
	int n_rand = 0, n_user = 0;
	int n_quit = 0;
	char ch_ans;

	
	while (!n_quit)
	{
		srand((unsigned int)time(NULL));
		n_rand = rand() % 100 + 1;
		
		while (1)
		{
			printf("������һ��1-100����:\n");
			scanf("%d", &n_user);
			if (n_user > 100 || n_user < 1)
			{
				printf("Wrong!������ֵ����ȷ��\n");
				continue;
			}

			if (n_user > n_rand)
			{
				printf("Wrong!�������Ƚϴ�...\n");
			}
			else if (n_user < n_rand)
			{
				printf("Wrong!��������е�С...\n");
			}
			else
			{
				printf("Right!!! ����һ��?(Y/N)");
				fflush(stdin);
				scanf("%c", &ch_ans);
				if (ch_ans != 'Y' || ch_ans != 'y')
				{
					n_quit = 1;
				}
				break;
			}
		}	
	}
}
