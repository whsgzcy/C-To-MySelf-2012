#include <stdio.h>
#include <string.h>

void main()
{
	int i;
	char str[10][20] = {"依赖的人","陌生的人","知己","深爱的人","厌恶的人","注定要在一起的人","好朋友","依赖你的人","感觉变态的人","珍惜的人"};
	char *p_str;

	printf("=============================在你眼中我是什么颜色?=============================");
	printf("\n");
	printf("\n");
	printf("1、太阳红 2、鹅黄 3、森林绿 4、海蓝 5、深夜黑 6、水晶紫 7、橘子橙 8、婴儿蓝 9、荧光绿 10、天使白\n");
	printf("\n");
	printf("请选择：（只能选一个）\n");
	scanf("%d", &i);

	p_str = &str[0][20];

	printf("在我眼里你是%s！", *(str + i - 1));
	getch();
}
