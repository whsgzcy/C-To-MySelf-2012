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
			printf("请输入一个1-100的数:\n");
			scanf("%d", &n_user);
			if (n_user > 100 || n_user < 1)
			{
				printf("Wrong!输入数值不正确！\n");
				continue;
			}

			if (n_user > n_rand)
			{
				printf("Wrong!你的输入比较大...\n");
			}
			else if (n_user < n_rand)
			{
				printf("Wrong!你的输入有点小...\n");
			}
			else
			{
				printf("Right!!! 再来一次?(Y/N)");
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
