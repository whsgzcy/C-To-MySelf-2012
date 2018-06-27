# 前言
1、这是从我一个很老的磁盘中找出的，是我大一时候写的C程序，今天【2018年06月26】偶然翻出来，很有感触

2、本人在大一时参加第八届蓝桥杯时获得 C语言程序设计个人赛 安徽省二等奖

3、现都整理出来 以后好吹牛逼

## 1、26个字母相加减
Here is the code:

``` 
#include <stdio.h>
#include <string.h>
#include <math.h>

void main()
{
	char str1[5];
	char str2[5];
	int l, m, i, sum1 = 0, sum2 = 0, k, n, p, s;

	printf("请输入第一个五个以内的字符串\n");
	gets(str1);
	printf("请输入第二个五个以内的字符串\n");
	gets(str2);

	l = strlen(str1);
	m = l;
	n = strlen(str2);
	p = n;

	for(i = 0; i < l; i++)
	{
		k = pow(10, m - 1);
		m--;
		sum1 = sum1 + (str1[i] - 65) * k;
	}

	for(i = 0; i < n; i++)
	{
		k = pow(10, p - 1);
		p--;
		sum2 = sum2 + (str2[i] - 65) * k;
	}

	s = sum1 - sum2;
	
	printf("%s-%s=%d\n", str1, str2, s);
}
```

## 2、标准差
Here is the code:

``` 
//标准差
#include <stdio.h>
#include <math.h>

void main()
{
	int i;
	double aver = 0.0, sum = 0.0, summ = 0.0, s;
	double a[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

	for(i = 0; i < 10; i++)
	{
		sum = sum + a[i];
	}
	aver = sum / 10;

	for(i = 0; i < 10; i++)
	{
		summ = summ + (a[i] - aver) * (a[i] - aver);
	}

	s = sqrt(0.1 * summ);

	printf("%lf", s);
}
```
## 3、猜数字 随机
Here is the code:

``` 
//猜数字
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int i, magic, rand();

	printf("请任意输入一个数\n");

	scanf("%d", &i);
	srand(time(NULL));

	magic = rand() % 10 + 1;

	while(i != magic)
	{
		if(i > magic)

		printf("大 Game Over\n");

	   else if(i < magic)

		printf("小 Game Over\n");

		scanf("%d",&i);
	}
		printf("猜对了 You Win\n");
}
```
## 4、乘法口诀
Here is the code:

``` 
//乘法口诀表
#include <stdio.h>

void main()
{
	int i, j, z;

	for(i = 1; i <= 9; i++)
	{
		for(j = 1; j <= 9; j++)
		{
			z = i * j;
			printf("%2d*%2d=%2d ", i, j, z);
		}
		printf("\n");
	}
}
```
## 5、吃梨问题
Here is the code:

``` 
#include <stdio.h>

void main()
{
	int i;
	int n = 1;

	for(i = 17; i > 0; i--)
	{
		n = 2 * n + 2;
		printf("%d ", n);
	}
}
```
## 5、二维数组转换
Here is the code:

``` 
//二维数组转置
#include <stdio.h>

void main()
{
	int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 1, 2, 3}};
	int b[4][3];
	int i, j;

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%2d ", a[i][j]);
			b[j][i] = a[i][j];
		}
			printf("\n");
	}
	printf("\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}
```
## 6、二维数组中最大值和最小值
Here is the code:

``` 
//二维数组中最大值和最小值
#include <stdio.h>

void main()
{
	int a[3][4] = {{2, 2, 3, 466}, {55, 6, 7, 8}, {9, 1, 2, 3}};
	int i, j, max, min;

	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%2d ", a[i][j]);
		}
			printf("\n");
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(a[i][j] > a[i][j + 1])
			{
				max = a[i][j];
				a[i][j + 1] = a[i][j];
			}		
		}
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(a[i][j] > a[i][j+1])
			{
				a[i][j] = a[i][j + 1];
				min = a[i][j + 1];
			}
		}
	}
	printf("%d\n%d\n", max, min);
}
```
## 7、分酒问题
Here is the code:

``` 
/*倒酒趣题*/
#include <stdio.h>
/*a:满瓶的容量 y:第一个空瓶的容量 z:第二个空瓶的容量*/ 
void Pourer(int a, int y, int z) 
{ 
    /* b:第一瓶实际的盛酒量 c:第二瓶实际的盛酒量*/
	int b = 0, c = 0, i = 6; 

	printf("倒酒的过程如下:(a,b,c下面的数字分别表示当前瓶内的酒量)\n\n");
	printf(" a(%d) b(%d) c(%d)\n %4d %4d %4d\n",a ,y ,z, a, b, c);

	while(a != i || b != i && c != i) /*当满瓶!=i 或另两瓶都!=i*/ 
	{ 
		if(!b) 
		{ 
			a -= y; 
		   b = y; 
		} 
	/*如果第一瓶为空，则将满瓶倒入第一瓶中*/
	else if(c == z) 
	{ 
		a += z; 
		c = 0;
	} 
   /*如果第二瓶满，则将第二瓶倒入满瓶中*/ 
   /*如果第一瓶的重量>第二瓶的剩余空间*/
	else if(b > z - c)
	{ 
		b -= (z - c); 
		c = z; 
	} 
   /*则将装满第二瓶，第一瓶中保留剩余部分*/
	else
	{ 
		c += b; 
		b = 0; 
	} 
   /*否则，将第一瓶全部倒入第二瓶中*/ 
	printf(" %4d %4d %4d\n",a ,b ,c); 
	} 
}
void main()
{ 
   /*a 代表盛酒瓶容量；b和c代表空瓶容量*/
	int a, b, c;
	a = 12;
	b = 8;
	c = 5;
	Pourer(a, b, c); /*按 a -> b -> c -> a 的操作步骤*/
}
```
## 9、分糖果
Here is the code:

``` 
#include <stdio.h>
/*分糖果*/
/*10,2,8,22,16,4,10,6,14,20*/
int fun(int a[10])
{
	int i;

	for(i = 0; i < 10; i++)
	{
		if(a[0] != a[i])
		{
			return 1;
		}
	}
	return 0;
}

void print(int a[10])
{
	int i;

	for(i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void main()
{
	void print(int a[10]);
	int fun(int a[10]);
	int a[10] = {10, 2, 8, 22, 16, 4, 10, 6, 14, 20};
	int i;
	int b[10];

	while(fun(a))
	{
		for(i = 0; i < 10; i++)
		{
			if(a[i] % 2 == 0)
				b[i] = a[i] = a[i] / 2;
			else
				b[i] = a[i] = (a[i] + 1) / 2;
		}

		for(i = 0; i < 9; i++)
		{
			a[i + 1] = a[i + 1] + b[i];
		}
		a[0] = a[0] + b[9];

		print(a);
	}
		printf("\n");
}
```
## 10、高次方尾数
Here is the code:

``` 
#include<stdio.h>
int main()
{
    /*变量last保存求X的Y次方过程中的部分乘积的后三位*/
	 int i, x, y, last = 1; 
     printf("Input X and Y(X**Y):");

     scanf("%d%d",&x,&y); 
     /*X自乘Y次*/
	 for(i=1;i<=y;i++) 
	 /*将last乘X后对1000取模，即求积的后三位*/
     last=last*x%1000; 
     /*打印结果*/
    printf("The last 3 digits of %d**%d is:%d\n",x,y,last); 
}
```
## 11、哥德巴赫猜想
Here is the code:

``` 
#include <stdio.h>
/*哥德巴赫猜想*/
void main()
{
	int n, i, j;
	for(n = 4; n <= 100; n = n + 2)
	{
		for(i = 2; i < n; i++)
		{
			if(fun(i) == 1)
			{
				if(fun(n - i) == 1)
				{
					printf("%2d=%d+%-5d", n, n - i, i);
					break;
				}
			}
		}
	}
}
int fun(int n)
{
	int i;
	for(i = 2; i < n; i++)
	{
		if(n % i == 0)
			break;
	}
	if(i == n)
		return 1;
	else
		return 0;			
}
```
## 12、韩信点兵
Here is the code:

``` 
#include <stdio.h>

void main()
{
	int i;

	for(i = 0;;i++)
	{
		if(i % 5 == 1)
		{
			if(i % 6 == 5)
			{
				if(i % 7 == 4)
				{
					if(i % 11 == 10)
					{
						printf("%d\n", i);
						break;
					}
				}
			}
		}
	}
}
```
## 13、回溯法
移动字母
2x3=6个方格中放入ABCDE五个字母，右下角的那个格空着，如图

A  | B |  C
------ | ---- | ---
D  | E |

 和空格子相邻的格子中的字母可以移动到空格中，比如，图中的C和E就可以移动，移动后的局面分别是：

A B 
D E C

A B C
D   E
 为了表示方便，我们把6个格子中字母配置用一个串表示出来，比如上边的两种局面分别表示为：

AB*DEC

ABCD*E

题目的要求是：请编写程序，由用户输入若干表示局面的串，程序通过计算，输出是否能通过对初始状态经过若干次移动到达该状态。可以实现输出1,否则输出0。初始状态为：ABCDE*
    用户输入的格式是：先是一个整数n，表示接下来有n行状态。程序输出也应该是n行1或0
    例如，用户输入：3
ABCDE*

AB*DEC

CAED*B

则程序应该输出：
1
1
0

Here is the code:

``` 
#include<stdio.h>
#include<conio.h>

int count = 0;

int IsCorrect(int i, int j, int (*Q)[8])
{
	int s, t;
    //判断行
	for(s=i, t=0; t<8; t++)
	{
		if(Q[s][t] == 1 && t != j)
		{
			return 0;
		}
	}
   //判断列
	for(t = j, s = 0; s < 8; s ++)
	{
		if(Q[s][t] == 1 && s != i)
		{
			return 0;
		}
	}
   //判断左上角
	for(s = i-1, t=j-1; s>=0 && t>=0; s--, t--)
	{
		if(Q[s][t] == 1)
		{ 
			return 0;
		}
	}
    //判断右下角
	for(s=i+1, t=j+1; s<8 && t<8; s++, t++)
	{
		if(Q[s][t] == 1)
		{
			return 0;
		}
	}
   //判断右上角
	for(s=i-1, t=j+1; s>=0 && t<8; s--, t++)
	{
		if(Q[s][t] == 1)
		{
			return 0;

		}
	}
   //判断左下角
	for(s=i+1, t=j-1; s<8 && t>=0; s++, t--)
	{
		if(Q[s][t] == 1)
		{
			return 0;
		}
	}

	return 1;
}

void Queen(int j, int (*Q)[8])
{
	int i, k;

	if(j == 8)
	{
		for(i=0; i<8; i++)
		{
			for(k=0; k<8; k++)

			{
				printf("%d ",Q[i][k]);
			}
			printf("\n");
		}
		printf("\n");

		count++;
		
		return;
	}

	for(i=0; i<8; i++)
	{
		if(IsCorrect(i, j, Q))
		{
			Q[i][j] = 1;

			Queen(j+1, Q);

			Q[i][j] = 0;
		}
	}
}

void main()
{
	int Q[8][8];

	int i, j;

	for(i=0; i<8; i++)
	{
		for(j=0; j<8; j++)
		{
			Q[i][j] = 0;
		}
	}

	Queen(0, Q);

	printf("The total number of Eight_Queen is%d\n",count);

	getch();
}
```
## 13、回文判断
Here is the code:

``` 
//判断回文
#include <stdio.h>
#include <string.h>

void main()
{
	char str[100];
	int i, j, l;

	gets(str);
	l = strlen(str);

	for(i = 0, l = l - 1; i <= l; i++, l--)
	{
		if(str[i] == str[l])
		{
			if(i == l || i < l)
			{
			printf("是回文");
			break;
			}
		}
		else
		{
			printf("不是回文");
			break;
		}
	}
}
``` 
## 14、集邮票
Here is the code:

``` 
#include <stdio.h>

void main()
{
	int s;
	int i, j;

	for(i = 0; i <= 4; i++)
	{
		for(j = 0; j <= 3; j++)
		{
			s = 3 * i + 5 * j;
			if(s != 0)
			{
			printf("%d ", s);
			}
			s = 0;
		}
	}
}
``` 
## 15、类约瑟夫环
Here is the code:

``` 
#include <stdio.h>
#include <malloc.h>
int i;

struct young 
{
	int n;
	struct young *next;
};

struct young *creat()
{
	struct young *head;
	struct young *p1, *p2;
   
	head = p2 = (struct young *)malloc(sizeof(struct young));
	p2 -> next = NULL;
	
	printf("请输入七个元素编号\n");

	for(i = 1; i <=7; i++)
	{
		p1 = (struct young *)malloc(sizeof(struct young));
		scanf("%d", &p1 -> n);
		p1 -> next = NULL;
		p2 -> next = p1;
		p2 = p1;		
	}
	
	p2 -> next = head->next;

	return head;
}

/*
void fun(struct young *head)
{
	struct young *p;
	int j = 0;
	i = 0;

	while(j < 1000)
	{
		if(p -> n == 0)
		{
			p = p -> next;
		}
		else
		{
			j++;
			if(j % 3 == 0)
			{
				i++;
				p -> n = 0;
				p = p -> next;
			}
			else
			{
				p = p -> next;
			}
		}
		if(i == 6)
			break;
	}
}

  */
void print(struct young *head)
{
	struct young *p,*first;
	p=first = head->next;
    
	do
	{
		printf("%d ", p -> n);
		p = p -> next;
	}while(p!=first);
	getch();
}

void main()
{
	struct young *head;
	head = creat();
//	fun(head);
	print(head);
	printf("\n");
}
``` 
## 16、利用指针代替下标进行数组编程:从健盘输入8个整数放入数组,然后将每个奇数加1,每个偶数减1,最后输出数组的所有元素
Here is the code:

``` 
#include <stdio.h>

void main()
{
	int a[8];
	int i;

	for(i = 0; i < 8; i ++)
		
		scanf("%d", a + i);

	for(i = 0; i < 8; i ++)
	{
		if(* (a + i) % 2 != 0)

			*(a + i) = * (a + i) + 1;

		else

			*(a + i) = * (a + i) - 1;

		printf(" %d ", * (a + i));
	}

	printf("\n\n");
}
``` 
## 17、实现建立和输出顺序表在此基础上实现删除表中数据。（测试数据。1，4, 6，9，15，22） 删除第4号元素
Here is the code:

``` 
#include <stdio.h>
#define maxsize 100

typedef int DataType;

typedef struct
{
	DataType data[maxsize];
	int length;
}sqlist;

void createlist(sqlist * L)
{
	int i;

	printf("请输入待建的表长：");

	scanf("%d", & L ->length);

	for(i = 0; i < L ->length; i ++)
	{
		scanf("%d", & L ->data[i]);
	}

	printf("\n表已经建立\n");
}

void print(sqlist L)
{
	int i;

	printf("\n\n输出顺序表: ");

	for(i = 0; i < L.length; i ++)

		printf(" %d ", L.data[i]);

	printf("\n\n请按人意见结束⋯⋯\n");
}

sqlist del(sqlist L, int i)
{
	DataType x;

	x = L.data[i - 1];

	for(; i < L.length; i ++)

		L.data[i - 1] = L.data[i];

	L.length--;

	printf("你要删除的数是 %d 已经删除了", x);

	return L;
}

void main()
{
	int i;
	sqlist L;

	createlist(& L);

	printf("请输入你需要删除的位置 i :");

	scanf("%d", & i);

	L = del(L, i);

	print(L);
}
``` 
## 18、输入两个数，输出他们的乘积
Here is the code:

``` 
#include <stdio.h>

int main()
{
	int x, y, z;

	printf("请输入x和y的值：\n");

	scanf("%d%d", & x, & y );  //通过知道输入数

	printf("计算乘积：%d * %d\n",x, y); //输出，知道是怎么输出的。

	z = x * y;

	printf("输出乘积：%d\n", z);

	return 0;
}
``` 
## 19、简单的字符串加密
Here is the code:

``` 
#include <stdio.h>
#include <string.h>

int main()
{
	char str[30];
	int k = 9, n, i;

	printf("请输入一行英文字母自动进行加密\n\n");

	gets(str);

	n = strlen(str);

	for(i = 0; i < n - 1; i ++)
	
	{
		if((* (str + i) >= 'a' && * (str + i) <= 'z') || (* (str + i) >= 'A' && * (str + i) <= 'Z'))

			* (str + i) = * (str + i) + k;
	}

	printf("输出加密后的字符\n\n");

	printf("%s\n", str);

	return 0;
}
``` 
## 20、测量各个变量所占字节数。如：int ,float, double.等
Here is the code:

``` 
#include <stdio.h>

int main()
{
	printf("输出各种变量的所占的字节\n");

	printf("int 所占字节数为：%d\n\n", sizeof(int) );

	printf("long 所占字节数为：%d\n\n", sizeof(long) );

	printf("char 所占字节数为：%d\n\n", sizeof(char) );

	printf("short 所占字节数为：%d\n\n", sizeof(short) );

	printf("double 所占字节数为：%d\n\n", sizeof(double) );

	printf("float 所占字节数为：%d\n\n", sizeof(float) );

	//这里就注意sizeof()函数就是来测量一个变量的所占的字节。很好用的
}
``` 
## 21、计算1+1+2+1+2+3+1+2+3+4+1+2+3+4+5+⋯⋯+1+⋯⋯+n
Here is the code:

``` 
#include<stdio.h>

int main()
{
	int i, n;
	//两个变量一开始是要赋值的，这样才能进行后面的相加。
	int sum = 0, a = 0;

	scanf("%d", & n);

	for(i = 1; i <= n; i ++)
	{
		a = a + i;
		//这里就是一个循环，用 a 来控制着。控制着前面的和这样就能直接相加了。
		sum = sum + a; 
	}

	printf("%d\n", sum);

	return 0;
}
``` 
## 22、从一个三行四列的整型二维数组中查找第一个出现的负数
Here is the code:

``` 
#include <stdio.h>

int main()
{
	int a[3][4];
	int i, j;

	printf("请输入一个三行四列的整数\n");

	for(i = 0; i < 3; i ++)
	{
		for(j = 0; j < 4; j ++)

			scanf("%d", * (a + i) + j);
	}

	for(i = 0; i < 3; i ++)
	{
		for(j = 0; j < 4; j ++)
		{
			if(* (* (a + i) + j) < 0)

				break;
		}

		if(* (* (a + i) + j) < 0)

			break;


	}

	printf("第一个负数为：");

	printf("%d\n", * (* (a + i) + j));
}
```
## 23、求5 * 5 矩阵对角线的和
Here is the code:

```
#include <stdio.h>

int main()
{
	int a[5][5], i, j;
	int sum = 0;

	for(i = 0; i < 5; i ++)

		for(j = 0; j < 5; j ++)

			scanf("%d", * (a + i) + j);

	for(i = 0; i < 5; i ++)
	{
		for(j = 0; j < 5; j ++)
		{
		    //这个控制条件很重要。
			if(i % 4 == j % 4 || i + j == 4)

				sum = sum + * (* (a + i ) + j);
		}

	}
	printf("%d\n", sum);
}
```   
## 24、九乘九口诀表
Here is the code:

```
#include <stdio.h>

int main()
{
	int i, j ;

	for(i = 1; i < 10; i ++)
	{
		for(j = 1; j <= i; j ++)

			printf("%d*%d=%-5d", i, j, i * j); // 这里要有一个要注意的时候，就是那个间距的问题
		//我在编程的时候输出的这一条我没有按照规矩来，就是因为考虑到这里输出的间距问题.
		printf("\n");
	}
}
```
## 25、实现矩阵转化
Here is the code:

```
#include <stdio.h>

int main()
{
	int a[3][4], b[4][3];
	int i, j;

	printf("现在是一个3 * 4 的矩阵\n");

	for(i = 0; i < 3; i ++)
      // 实现了输入。
		for(j = 0; j < 4; j ++)
			
			scanf("%d", * (a + i) + j);

	for(i = 0; i < 3; i ++)
	{
	   //转化
		for(j = 0; j < 4; j ++) 

			* (* (b + j) + i) =  * (* (a + i) + j);

	}
   // 最后输出。
	printf("转化成了 4 * 3 的矩阵\n"); 

	for(i = 0; i < 4; i ++)
	{
		for(j = 0; j < 3; j ++)
         // 这里输出很重要，不要弄错了顺序。是 4 * 3；
			printf("%-5d", * (* (b + i) + j)); 

		printf("\n");

	}
	printf("\n");
}
```
## 26、在二维数组中，求得最大值和最小值
Here is the code:

```
#include <stdio.h>
// 数组的形参，就这么表示。
int max(int a[3][3] /*形参*/) 
{
	int i, j;
	int max = * (* a);

	for(i = 0; i < 3; i ++)
	{
		for(j = 1; j < 3; j ++)

			if(max < * (* (a + i)) + j)

				max = * (* (a + i)) + j;
	}

	return max;
}

int min(int a[3][3])
{
	int i, j;
	int min = * (* a);

	for(i = 0; i < 3; i ++)
	{
		for(j = 1; j < 3; j ++)

			if(min > * (* (a + i)) + j)

				min = * (* (a + i)) + j;
	}

	return min;
}

int main()
{
	int i, j;
	int a[3][3];
	int m = 0, n = 0;

	for(i = 0; i < 3; i ++)

		for(j = 0; j < 3; j ++)

			scanf("%d", * (a + i) + j);

	m = max(a/*实参*/);
	// 这里数组的函数调用要注意，我这里一开始的时候有点昏。其实一维二维数组都一样。
	n = min(a);  
	//只要把数组名当做实参传入形参。

	printf("max = %d, min = %d\n", m, n);
}//我用的是调用函数做的。
```
## 27、素数的求法
Here is the code:

```
#include <stdio.h>
#include <math.h>

int main()
{
	int k;
	int i, n, j = 0;
	double m;

	scanf("%d", & k);

	for(n = 2; n <= k; n ++)
	{
		m = sqrt (n);

		for(i = 2; i < m; i ++)

			if(n % i == 0)   // 这就是根据那个素数只能被1 和 自身整除外都不能整除了。所以有这个判断。

				break;

		if(i > m)  //这一步很重要。来判断是不是素数。
		{
			j ++;

			printf("%-8d", n);  //这里只是来控制输出，没有实际意义。

			if(j % 6 == 0)

				printf("\n");
		}
	}

	printf("\n");

}
```
## 28、最简单的一维数组排序
Here is the code:

```
#include <stdio.h>
int main()
{
	int a[10];
	int i, j, t;

	for(i = 0; i < 10; i ++)

		scanf("%d", a + i);

	printf("一排好的顺序为：\n");

	for(i = 0; i < 10; i ++)
	{
		for(j = i + 1; j < 10; j ++)

			if(* (a + i) > * (a + j))
			{
				t = * (a + i);
				* (a + i) = * (a + j);
				* (a + j) = t;
			}

		printf("%-4d", * (a + i));
	}

	printf("\n");

	return 0;
}
```
## 29、进制转化
Here is the code:

```
#include <stdio.h>
#define maxsize 100

typedef int SElemtype;

typedef struct
{
	SElemtype data[maxsize];
	int top;
}sqstack;

void Initstack (sqstack * S)
{
	S ->top = -1;
}

int IsEmpty(sqstack * S)
{
	return S ->top == -1;
}

int IsFull(sqstack * S)
{
	return S ->top == maxsize - 1;
}

void push(sqstack * S, SElemtype x)
{
	if(IsFull(S))
	{
		printf("此栈已满，不能再堆：\n");
		exit (1);
	}

	S ->data [++ S ->top ] = x;
}

int pop(sqstack * S)
{
	if(IsEmpty(S))
	{
		printf("此栈以空，没有值可以退栈：\n");
		exit (1);
	}

	return S ->data [S ->top --];
}

void conversionA()
{
	sqstack S;
	SElemtype e;
	int i;

	Initstack (& S);

	printf("请输入一个需要转化的数值：");

	scanf("%d", & e);

	while (e)
	{
		push(& S, e % 2);
		e = e / 2;
	}

	printf("\n\n转化为二进制的结果为：");

	while(!IsEmpty(& S))
	{
		i = pop(& S);

		printf("%d", i);
	}

	printf("\n\n");
}

void conversionB()
{
	sqstack S;
	SElemtype e;
	int i;

	Initstack (& S);

	printf("请输入一个需要转化的数值：");

	scanf("%d", & e);

	while (e)
	{
		push(& S, e % 8);
		e = e / 8;
	}

	printf("\n\n转化为八进制的结果为：");

	while(!IsEmpty(& S))
	{
		i = pop(& S);

		printf("%d", i);
	}

	printf("\n\n");
}

void conversionC()
{
	sqstack S;
	SElemtype e;
	int i;

	Initstack (& S);

	printf("请输入一个需要转化的数值：");

	scanf("%d", & e);

	while (e)
	{
		push(& S, e % 16);
		e = e / 16;
	}

	printf("\n\n转化为十六进制的结果为：");

	while(!IsEmpty(& S))
	{
		i = pop(& S);

		printf("%d", i);
	}

	printf("\n\n");
}

void main()
{
	int x, M;

	while (x) // 通过这个while语句，可以来实现循环，这样不至于运行一次就没了。
	{
		printf("\n");

		printf("                                      栈和队列的应用\n");

		printf("                    *****************************************\n");

		printf("                    **    1、10-2进制整数转换              **\n");

		printf("                    **    2、10-8进制整数转换              **\n"); 
		
		printf("                    **    3、10-16进制整数转换             **\n");
		
		printf("                    **    0 、退出                         **\n");
		
		printf("                    *****************************************\n");
		
		printf("请输入你需要操作的步骤：");
		
		scanf("%d", & x);
		
		switch (x)
		{
		
		case 1: conversionA();
			
			break;
		
		case 2: conversionB();
			
			break;
		
		case 3: conversionC();
			
			break;
		
		case 0: 
			
			printf("您是否要退出程序? 1.是 2.否\n"); // 这里这个判断可以自己选择。
			
			scanf("%d",&M); //其实在case之后是可以自己写的，但是我们把自己写的程序用调用函数调用了。
			
			if(M==1)
			{
				printf("您已退出程序了!\n"); //一般短的程序自己写在下面。
				exit(0);
			}

			else 

				x = 2;
		}
	}
}
```
## 30、判断是否为回文函数
Here is the code:

```
#include <stdio.h>
#include <string.h>

void main()
{
	char str[50];
	int i = 0, j;

	printf("请输入一串代码进行判断\n");

	gets(str);

	j = strlen (str) - 1;

	while (* (str + i) == ' ') // 这两步是来排除万一前面和后面有空格。一旦有而且前面和后面的空格不等，那么没有这两步操作的话直接来判断就会影响操作。 

		i ++;

	while (* (str + j) == ' ')

		j --;

	for(; j >=  i; i ++, j --)
	{
		if( * (str + i) != * (str + j))

			break;
	}

	if(j <= i)

		printf("\n\n此函数为 是 回文函数。\n\n");

	else 

		printf("\n\n此函数 不是 回文函数。\n\n");

}
```
## 31、求数组前 n 个元素之和
Here is the code:

```
#include <stdio.h>

int fum(int a[10], int n)
{
	int sum;

	if(n == 0)
		
		sum = 0; //调用的时候一定要自己明白怎么调用的，一步一步的来看，这里我一开始
	//写成了 sum = * (a + n) ; 其实多加了。自己每一次看到时候一定要停下看他怎么调用。一步一步想。
	
	else
		
		sum = fum(a, n - 1) + * (a + (n -1));  //最简单的递归。用递归一下子解决问题。 

	return sum;
}

void main()
{
	int a[10], sum ;
	int i, n;

	for(i = 0; i < 10; i ++)
	{
		scanf("%d", a + i);
	}

	printf("\n这个数组有十个元素，你需要求第几个元素前的和：\n");

	scanf("%d", & n);

	sum = fum (a, n);

	printf("\n前 %d 个数的和为：%d\n\n",n, sum);
}
```
## 32、元素查找（加入了判断是否符合你要查找的元素）
Here is the code:

```
#include <stdio.h>

void main()
{
	int x;
	int a[] = {98, 64, 38, 38, 69, 346, 64, 38, 49, 64, 91}, b[5] = {0};
	int i, j, n;

	printf("已经展示所有数，任你查找\n\n");

	for(i = 0; i < 11; i ++)

		printf("%-5d", * (a + i));

	printf("\n\n请输入你要查找的元素：");
	
	scanf("%d", &x);

	for(i = 0, j = 0; i < 11; i ++)
	{
		if(x == * (a + i))
		{
			* (b + j) = (i + 1);  // 用这个数组b的目的就是为了下面可以判断是否你要你输入的数在这里面就有。
			j ++;
		}

		n = j; //这里就是控制了数组b在最后输出的时候不会多输出，一开始我对b进行了赋值。
	}

	if(* b == 0)

		printf("\n\n没有符合你查找的元素，谢谢！");

	else 
	{
		printf("\n\n你要查找的元素 %d 在", x);

		for(j = 0; j < n; j ++)

			printf("第 %d 号位", * (b + j));
	}

	printf("\n\n");

}
```
## 33、读入的是一个整数，可以转化成实数输出
Here is the code:

```
#include <stdio.h>

int main()
{
	int i;
	double j;

	printf("请输入一个整数： ");

	scanf("%d", & i);

	j = i;  //这里可以转化哦

	printf("\n输出一个实数 %lf\n", j);

	return 0;
}
```
## 34、替换字符串里面的字符。（首先输入字符，再输入你需要更改的字符，最后输入你要改成什么的字符）
Here is the code:

```
#include <stdio.h>

void main()
{
	char s[20], s1[20], s2[20];
	int i, j ;
	int m, n;

	printf("请输入一串字符：");

	gets(s);

	printf("\n请输入你需要替换的字符： ");

	gets(s1);

	printf("\n请输入你需要替换成什么字符： ");

	gets(s2);

	j = strlen(s);
	n = strlen(s1);

	for(i = 0; i < j ; i ++)
	{
		for(m = 0; m < n; m ++)
		{
			if(* (s + i) == * (s1 + m))

				* (s + i) = * (s2 + m);//两个for循环很重要。我要实现的是将字符串s里的每一个字符都拿出来与需要替换的字符数组里的每一个字符比较，看看s串里的每一个与这个替换串里有没有相同的，相同就替换。
		}
	}

	printf("\n");

	for(i = 0; i < j; i ++)

		printf("%c", * (s + i));

	printf("\n");
}
```
## 35、字符行排版
Here is the code:

```
#include <stdio.h>
#include <string.h>

int sp(char st[100])
{
	int i, n = 0;

	for(i = 0; * (st + i) != '\0'; i ++)
	{
		if(* (st + i) == ' ')

			n ++;
	}

	return n;
}

int num(char st[100])
{
	int j = 0, m = 0;
	int i;

	for(i = 0; * (st + i) != '\0'; i ++)

		if(* (st + i ) == ' ')

			j = 0;

		else if(j == 0)
		{
			j = 1;
			m ++;
		}

	return m;
} 

void main()
{
	char st[100], st1[100];
	int i, j = 0, k = 0;
	int n, m ;  //拿来呈递上面调用函数返回来的值。

	printf("请任意输入一行字符串，我们将会为你排版。\n\n");

	gets(st);

	n = sp(st) / (num(st) - 1);

	for(i = 0, m = 0; * (st + i) != '\0'; i ++)  // 一切功能全在这下面。
	{
		if(* (st + i) == ' ') 

			k = 1;

		else if(k == 1) // 最主要的就是这里的判断。
		{
			k = 0;

			while(m != (n + 1))
			{
				* (st1 + j + m) = ' ';
				m ++;
			}

			* (st1 + j + n) = * (st + i);

			j = j + n + 1;

			m = 0;
		}

		else 
		{
			* (st1 + j ) = * (st + i);
			
			j = j + 1;
		}
	}
	k = j;

	printf("\n\n输出已经排版好的顺序：\n\n");

	for(j = 0; j < k; j ++)
	{
		printf("%c", * (st1 + j));
	}

	printf("\n\n");
}
```
## 36、简陋的通讯录
Here is the code:

```
#include <stdio.h>

struct addr  // 这里用的是结构体。一般这种就用结构体，很快。
{
	char name[20];
	char add[30];
	char phone[20];
};

int main()
{
	struct addr stu[3]; // 这里是定义一个结构体数组。可以处理多对数据
	int i;

	for(i = 0; i < 3; i ++)
	{
		printf("\n请输入第 %d 个人名字，地址，号码：\n", i + 1);

		scanf("%s%s%s", stu[i].name , stu[i].add , stu[i].phone ); // 这里就是结构体输入。

	}

	printf("\n\n");
	printf("下面是你输入的结果将显示给你：\n");

	for(i = 0; i < 3; i ++)
	{
		printf("\n第 %d 个人名字，地址，号码：\n", i + 1);
		printf("姓名： %s.\n", stu[i].name);
		printf("地址： %s.\n", stu[i].add);   // 这里就是结构体的输出。
		printf("电话： %s.\n", stu[i].phone);
	}
}
```
## 37、用‘结构’统计学生的成绩管理。有姓名，学号，各科成绩
Here is the code:

```
#include <stdio.h>

struct student
{
	int num;
	char name[10];
	int score[5];
};

int main()
{
	struct student stu[3];
	int i, j;

	for(i = 0; i < 3; i ++)
	{
		printf("\n请输入第 %d 个人的学号，姓名，五门课的成绩：\n", i + 1);

		scanf("%d%s", & stu[i].num , stu[i].name );

		for(j = 0; j < 5; j ++)

			scanf("%d", & stu[i].score [j]); // 这里是控制数组成绩的输入。
	}

	printf("\n\n");

	for(i = 0; i < 3; i ++)
	{
		printf("\n\n第 %d 个人的学号，姓名，五门课的成绩：\n", i + 1);
		printf("学号 ：%d\n", stu[i].num );
		printf("姓名 ：%s\n", stu[i].name );
		printf("成绩 ：" );  // 但是这里一定要注意，这个输出。只是一个形式在这里。

		for(j = 0; j < 5; j ++) //同样这里输出成绩，要用另一个循环进行输出

			printf("%4d", stu[i].score [j]);
	}

	printf("\n\n");

}
```
## 38、删除字符串中的特定字符
Here is the code:

```
#include <stdio.h>

int main()
{
	char str[50];
	int i;
	char n;

	gets(str);

	printf("\n\n请输入一个你需要查找的字符：");

	scanf("%c", & n);

	printf("\n\n");

	for(i = 0; str[i] != '\0'; i ++)
	{
		if(* (str + i) == n)

			continue; // 并没有删除，只是覆盖了，只是找到那里没有输出。造假了。

		else

			printf("%c", * (str + i));
	}

	printf("\n\n");
}
```
## 39、求解符号方程
Here is the code:

```
#include <stdio.h>

void main()
{
	long a, b, i, j, k;

	for(i = 10; i < 100; i ++)
	{
		for(j = 0; j < 10; j ++)

			for(k = 0; k < 10; k ++)
			{
				a = 8 * 100 + j * 10 + k; //此题目纯属数学题，但是用程序写出来，这里用的是三层循环，把判断加进去，判断全写在一个if里，我已开始是想把这些判断作为条件。但是这里一步到位。这样做很简洁。
				b = 97 * 100 + j * 10 + k;

				if((b == i * a + 1) && (b >= 1000) && b <= 100000 && 8 * i < 100 && 9 * i > 100)

					printf("\n %ld = %ld * %ld + %ld\n", 97 * 100 + j * 10 + k, 800 + j * 10 + k, i, b % i);
			}
	}
}
```
## 40、编写出调用函数num（int m, int k, int a[]）将大于 m 的 k 个素数，保存到数组a[]中，最后调用这个函数
Here is the code:

```
#include <stdio.h>
#include <math.h>

void num(int m, int k, int a[])
{
	int i, q, j, n;

	for(i = 0; i < k; i ++)
	{
		for(j = m + 1; j < 10000; j ++)
		{
			q = sqrt(j);

			for(n = 2; n <= q; n ++)   //  我现在通过做题，现在好多题都是通过循环加判断，再通过调用函数。
			{
				if(j % n == 0)

					break;
			}

			if(n > q)

				break;
		}

		* (a + i) = j;  
		m = j;
	}
}

void main()
{
	int a[100];

	int k, m, i; // 还有我们在正式比赛时，万一定义多了变量，一定要注意这个注释，问题，我现在虽然没有注释，以后一定要注释。

	printf("请输入你一个数和你要取几位素数：");

	scanf("%d%d", & m, & k);

	num(m, k, a);

	printf("\n\n输出一下结果：\n\n");

	for(i = 0; i< k; i ++)
	
		printf("%-5d", * (a + i));

	printf("\n\n");
}
```
## 41、30个人围成一圈，有15个坏的，15个好的，现在30个人围成一圈，报数，报到九的退出。出去15个。怎么站到最后15个坏的全部出去。有的时候用循环链表，队列，栈，一定要注意可能很相似。但又很大区别。一定要选好具体方法
Here is the code:

```
#include <stdio.h>
#include <malloc.h>

struct num
{
	int n;

	struct num *next;
};

int i;

struct num *creat()
{
	struct num * head;
	struct num * p1, * p2;

	head = NULL;
	i = 0;

	p1 = p2 = (struct num * ) malloc (sizeof (struct num));

    p1 ->n = 1;

	while (i < 30)
	{
		i = i + 1;

		if(i == 1)

			head = p1;

		else 

			p2 ->next = p1;

		p2 = p1;

		p1 = ((struct num * ) malloc (sizeof (struct num)));

		p1 ->n = 1;
	}

	p2 ->next = head;  // 循环链表的处理方式。
 
	return head;
}

void fun(struct num * head)
{
	struct num * p;
	int j;

	p = head;
	i = 0;
	
	for(j = 0; j < 10000;)
	{
		if(p ->n == 0)
		{
			p = p ->next;  // 因为这时候 0 被踢出去，不参与数了。但是他这个数在，我们认为他踢出了。跳过他就行了。
			j = j;
		}
		
		else
		{
			j = j + 1;

			if(j % 9 == 0)
			{
				p ->n = 0;
				
				i = i + 1;
			}
			
			else
			{
				p = p ->next;
			}
		}

		if(i == 15)

			break;
	}

	//head = p;

	return head;
}

void print(struct num * head)
{
	struct num * p;

	i = 0;
	p = head;

	while (i < 30)
	{
		i = i + 1;

		printf("%-5d", p ->n);

		p = p ->next;
	}
}

void main()
{
	struct num * head; 

	head = creat();

	fun(head);

	print(head);

	printf("\n\n");
}
```
## 42、十个小孩围成一圈，老师给第一个小孩10块，老师给第二个小孩2，第三个小孩8块，第四个小22块，第五个小孩16块，第六个小孩4块，第七个小孩10块，第八个小孩6块，第九个小孩14块，第十个小孩20块，然后所有的小孩同时将手中的糖分一半给右边的小孩。糖块为奇数的小孩可以向老师要一个糖。经过这样几次之后，小孩手里的糖全是相等的，问，现在小孩手中的糖是多少。（我用的是循环链表。这里记住是同时。分一半给右边的小孩，所以在阅读题目的时候一定要好好理解。）
Here is the code:

```
#include <stdio.h>
#include <malloc.h>

struct stu
{
	int num;

	struct stu * next;
};

int n;

struct stu * creat()
{
	struct stu * head;
	struct stu * p1, * p2;

	head = NULL;
	n = 1;

	p1 = p2 = (struct stu *) malloc (sizeof (struct stu));

	printf("现在请给分别十个小朋友分糖,以 0 结束。：\n\n");

	scanf("%d", & p1 ->num);

	while(n <= 10)
	{
		if(n == 1)

			head = p1;

		else

			p2 ->next = p1;

		p2 = p1;

		p1 = (struct stu * ) malloc (sizeof (struct stu));

		scanf("%d", & p1 ->num);

		n = n + 1;
	}

	p2 ->next = head;

	return head;
}

void fun(struct stu * head)
{
	struct stu * p;
	int i;
	int a[10];

	p = head;
 
	for(i = 0; i < 12 ; i ++)
	{
		for(i = 0; i < 10; i ++)
		{
			if((p ->num) % 2 != 0)
			{
				p ->num = ((p ->num) + 1);
				p = p ->next;
			}

			else

				p = p ->next;
				
		}

		for(i = 0; i < 10; i++)
		{
			a[i] = (p ->num) / 2;
			p = p ->next;

			printf("%3d", * (a + i));
		}

		printf("\n");

		for(i = 0; i < 10; i ++)
		{
			p ->next ->num = ((p ->next ->num) / 2 ) + * (a + i) ;
			p = p ->next;
		}

		for(i = 0; i < 10; i ++)
		{
			if((p ->num) % 2 != 0)
			{
				p ->num = ((p ->num) + 1);
				p = p ->next;
			}

			else

				p = p ->next;
				
		}

		for(i = 0; i < 10; i ++)
		{
			a[i] = p ->num;
			p = p ->next;
		}

		for(i = 1; i < 10; i ++)
		{
			if(* (a + 0) != * (a + i))

				break;
		}

		if(i == 10)

			i = 11;

	}

	return head;
}

void print(struct stu * head)
{
	struct stu * p;

	p = head;
	n = 0;

	while (n < 10)
	{
		n = n + 1;

		printf(" %-3d ", p ->num);

		p = p ->next;
	}
}

void main()
{
	struct stu * head;

	head = creat();

	fun(head);

	print(head);
}
```
## 43、在实现链表输入输出的基础上实现插入数据和删除数据。数据已给出输入（3,5,9,10,15,19）。插入数 11 。删除数 15 。请用链表实现。
Here is the code:

```
//1.在实现链表输入输出的基础上实现插入数据和删除数据。数据已给出输入
//（3,5,9,10,15,19）。插入数 11 。删除数 15 。请用链表实现。

#include <stdio.h>
#include <malloc.h>

struct stu
{
	int n;
	struct stu *next;
};

int n;

struct stu *create()
{
	struct stu *head;
	struct stu *p1, *p2;

	head = NULL;
	n = 0;

	p1 = p2 = (struct stu *) malloc (sizeof (struct stu));

	scanf("%d", &p1 ->n);

	while (p1 ->n != 0)
	{
		n = n + 1;

		if(n == 1)

			head = p1;
		else

			p2 ->next = p1;

		p2 = p1;

		p1 = (struct stu *) malloc (sizeof (struct stu));

		scanf("%d", &p1 ->n);
	}

	p2 ->next = NULL;

	return head;
}

void print(struct stu *head)
{
	struct stu * p;

	p = head;

	if(head != NULL)
	{
		while (p != NULL)
		{
			printf("%d\t", p ->n);
			p = p ->next;
		}
	}
}

struct stu * insert(struct stu * head, struct stu * st)
{
	struct stu * p1, * p2;
	struct stu * p;

	p1 = head;
	p = st;

	if(head == NULL)
	{
		head = p;
		p ->next = NULL;
	}

	else
	{
		while ((p ->n > p1 ->n) && p1 ->next != NULL)
		{
			p2 = p1;
			p1 = p1 ->next;
		}

		if(p ->n <= p1 ->n)
		{
			if(head == p1)

				head = p;
			else 

				p2 ->next = p;

			p ->next = p1;
		}
		else
		{
			p1 ->next = p;
			p ->next = NULL;
		}
	}

	n = n + 1;

	return head;
}

struct stu *del(struct stu *head, int n1)
{
	struct stu *p1, *p2;

	if(head == NULL)

		printf("NULL\n\n");

	p1 = head;

	while (n1 != p1 ->n && p1 ->next != NULL)
	{
		p2 = p1;
		p1 = p1 ->next;
	}

	if(n1 == p1 ->n)
	{
		if(head == p1)

			head = p1 ->next;

		else 

			p2 ->next = p1 ->next;

		n = n - 1;
	}

	else 

		printf("没有你要删除的数：\n");

	return head;
}

void main()
{
	struct stu * head, * st;
	int n;

	head = create();

	print(head);

	printf("\n\n请输入你需要删除的数：\n");

	scanf("%d", & n);

	head = del(head, n);

	print(head);

	printf("\n\n请输入你需要插入的数：\n");

	st = (struct stu *) malloc (sizeof(struct stu));

	scanf("%d", & st ->n);

	head = insert(head, st);

	print(head);
}
```
## 44、利用指向行的指针变量求5×3数组各行元素之和
Here is the code:

```
#include <stdio.h>

void main()
{
	int a[3][3], b[3] = {0};
	int i, j;

	for(i = 0; i < 3; i ++)
		
		for(j = 0; j < 3; j ++)

			scanf("%d", (* (a + i) + j));

	for(i = 0; i < 3; i ++)
	{
		for(j = 0; j < 3; j ++)
		{
			* (b + i) = * (* (a + i) + j) + * (b + i);
		}
	}

	printf("每行的结果为：\n");

	for(i = 0; i < 3; i ++)

		printf("%d\n", * (b + i));

}
```
## 45、链表的增删改查
Here is the code:

```
#include <stdio.h>
#include <malloc.h>
#include <conio.h> 

struct student 
{
	long num;
	int score;

	struct student *next ;
};

int n;

struct student * creat() //创建一个有数据的表，其实也就是输入。
{
	struct student * head;
	struct student * p1, * p2;

	head = NULL;
	n = 0;

	p1 = p2 = (struct student * ) malloc (sizeof (struct student));

	scanf("%ld%d", & p1 ->num, &p1 ->score);

	while (p1 ->num != 0)
	{
		n = n + 1;

		if(n == 1)

			head = p1;

		else 

			p2 ->next = p1;

		p2 = p1;

		p1 = (struct student * ) malloc (sizeof (struct student));

	    scanf("%ld%d", &p1 ->num, &p1 ->score);
	}

	p2 ->next = NULL;

	return head;// 返回一个链表。因为下面调用。
}

void print(struct student * head) //输出链表。也就等于输出
{
	struct student * p;

	printf("一共有%d个数， 分别为：\n", n);

	p = head;

	if(head != NULL)
	{
		while (p != NULL)
		{
			printf("%ld, %d\n", p ->num, p ->score);

			p = p ->next;
		}
	}
}

struct student * del(struct student * head, long num)//开始删除，作为一个调用函数。
{
	struct student * p1, * p2;

	if(head == NULL)
	{
		printf("此表为空表，不能实现删除。\n");

		return head;
	}

	p1 = head;

	while(num != p1 ->num && p1 ->next != NULL)// 在这里就是应用了链表的思想
	{
		p2 = p1;
		p1 = p1 ->next; //结点的指向。
	}

	if(num == p1 ->num)
	{
		if(head == p1)

			head = p1 ->next;

		else 

			p2 ->next = p1 ->next;

		n = n -1;

	}

	else 

		printf("你删除的学号不存在，请重新输入。\n");

	return head;
}

struct student * insert(struct student * head, struct student * stu)
{
	struct student * p, * p1, * p2;

	p = stu;
	p1 = head;

	if(head == NULL)
	{
		head = p;

		p ->next = NULL;
	}

	else
	{
		while((p ->num > p1 ->num) && (p1 ->next != NULL))
		{
			p2 = p1;
			p1 = p1 ->next;
		}

		if(p ->num <= p1 ->num)
		{
			if(head == p1)

				head = p;

			else

				p2 ->next = p;

			p ->next = p1;
		}

		else 
		{
			p1 ->next = p;
			p ->next = NULL;
		}

	}

	n = n + 1;
  
	return head;

}

struct student * locate(struct student * head, long num1)//查找。
{
	struct student * p;

	if(head == NULL)

		printf("此表为空表不能实现查找。\n");

	p = head;

	for(; p ->next != NULL; p = p ->next)
	{
		if(num1 == p ->num)

			printf("你要查找的学号是：%ld;\n此学号的分数为:%d。\n", p ->num, p ->score);
	}



	/*while (num1 != p ->num && p ->next != NULL)
	{
		p = p ->next;
	}

	if(p ->next != NULL)


        printf("你要查找的学号是：%ld;\n此学号的分数为:%d。\n", p ->num, p ->score);


	else 

		printf("I am so sorry , NO found\n");*/

	return 0;
}

struct student * modify(struct student * head , struct student * stu1)//修改。
{
	struct student * p,* p1,* p2;

	if(head == NULL)

		printf("此表为空表不能实现修改。\n");

	p = head;
	p1 = stu1;

	while(p1 ->num != p ->num && p ->next != NULL)
	{
		p2 = p;
		p = p ->next;
	}

	if(p ->next != NULL)
	{
		if(head == p)

			head = p1;

		else

			p2 ->next = p1;

		p1 ->next = p ->next;
	}

	else

		printf("你输入要查找的学号有误，请重新输入。\n");

	return head;
}


void main()
{
	struct student * head, * stu, * stu1;// 以下全是调用函数和输出。

	long num, num1;

	head = creat();

	print(head);

	printf("请输入一个需要删除的学号：\n");

	scanf("%ld", &num);

	while(num != 0)
	{
		head = del(head, num);

		print(head);

		printf("请输入一个需要删除的学号：\n");

    	scanf("%ld", &num);
	}

	printf("请输入你需要插入的学号和分数：\n");

	stu = (struct student *) malloc (sizeof (struct student));

	scanf("%ld%d", &stu ->num, &stu ->score);

	while(stu ->num != 0)
	{
		head = insert(head, stu);

		print(head);

		printf("请输入你需要插入的学号和分数：\n");

    	stu = (struct student *) malloc (sizeof (struct student));

    	scanf("%ld%d", &stu ->num, &stu ->score);

	}

	printf("请输入一个你需要查找到学号:\n");

	scanf("%ld", &num1);

	while (num1 != 0)
	{
		locate(head, num1);

        printf("请输入一个你需要查找到学号:\n");

	    scanf("%ld", &num1);
	}

	printf("请输入一个需要修改的学号和分数：\n");

	stu1 = (struct student *) malloc (sizeof (struct student));

    scanf("%ld%d", &stu1 ->num, &stu1 ->score);

	while (stu1 ->num != 0)
	{
		head = modify(head, stu1);

		print(head);

		printf("请输入一个需要修改的学号和分数：\n");

	    stu1 = (struct student *) malloc (sizeof (struct student));

        scanf("%ld%d", &stu1 ->num, &stu1 ->score);
 
	}
getch();

}
```
## 46、买鸡
Here is the code:

```
#include <stdio.h>
/*买鸡*/
void main()
{
	int x, y, z;

	for(x = 0; x < 100; x++)
	{
		for(y = 0; y < 100; y++)
		{
			if(7 * x + 4 * y == 100)
			{
				z = 100 - x - y;
				printf("%d %d %d \n", x, y, z);
			}
		}
	}
}
```
## 47、扑克问题，回溯法，对链表的回溯
Here is the code:

```
#include <stdio.h>
#include <malloc.h>
#include <string.h>
int i;

struct pk
{
	char str[3];
	struct pk *next;
};

struct pk *creat()
{
	struct pk *head;
	struct pk *p1, *p2;
	i = 0;
	head = NULL;
	p1 = p2 = (struct pk *)malloc(sizeof(struct pk));

	strcpy(p1 -> str, "1");

	while(i < 13)
	{
		i++;
		if(i == 1)
		{
			head = p1;
		}
		else
		{
			p2 -> next = p1;
		}
		p2 = p1;
		p1 = (struct pk *)malloc(sizeof(struct pk));
		strcpy(p1 -> str, "1");
	}
	p2 -> next = head;
	return head;
}

void fun(struct pk *head, char a[13][5])
{
	struct pk *p;
	int j = 0;
	int n = 0;
	i = 0;
	p = head;

	while(j < 1000)
	{
		if(strcmp(p -> str, "1") != 0)
		{
			p = p -> next;
		}
		else
		{
			j++;
			if(j % 2 == 0)
			{
				i++;
				strcpy(p -> str, a[n]);
				n++;
				p = p -> next;
			}
			else
			{
				p = p -> next;
			}
		}
		if(i == 13)
			break;
	}
}

void print(struct pk *head)
{
	struct pk *p;
	p = head;
	i = 0;

	while(i < 13)
	{
		printf("%s ", p -> str);
		p = p -> next;
		i++;
	}
}

void main()
{
	char a[13][5] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
	struct pk *head;

	head = creat();
	fun(head, a);
	print(head);
	printf("\n");
}
```
## 48、前50位素数
Here is the code:

```
#include <stdio.h>

void main()
{
	int i = 1, j = 2, n = 0;

	while(n < 50)
	{
		i++;
		while(i > j)
		{
			if(i % j == 0)
				break;
			else
				j++;
		}
			if(j == i)
			{
				printf("%.2d ", i);
				n++;
			}
				j = 2;
	}
	printf("\n");
}
```
## 49、亲密数
Here is the code:

```
#include <stdio.h>

void main() 
{ 
    int A, i, B, n; 

    for(A = 1; A < 3000; A++)        
    {        
        for(B = 0, i = 1; i <= A / 2; i++)//若是大于a的一半的话，则不符合条件
		{							
            if(A % i == 0)
			{
				B = B + i;//b总值
			}
		}							
        for(n = 0, i = 1; i <= B / 2; i++)
		{
            if(B % i == 0)
			{
				n = n + i;
			}
		}
        if(n == A && A > B)
		{
            printf("%d++%d\n", A, B);
		}
	}
		printf("\n");
}
```
## 50、用指针将两个数交换并在主函数中输出，将十进制数转化为八进制(栈）
Here is the code:

```
#include <stdio.h>
#define maxsize 100

typedef int dataType;

typedef struct 
{
	dataType data[maxsize];
	int length;
}sqlist;

void createlist(sqlist *L)
{
	int i;

	printf("请输入代建的表长：");

	scanf("%d", & L ->length);

	for(i = 0; i < L ->length; i ++)
	{
		scanf("%d", &L ->data[i]);
	}

	printf("\n已成功建立顺序表！请按任意键结束！\n");
}

void print(sqlist L)
{
	int i;

	printf("\n\n输出表中的元素： ");

	for(i = 0; i < L.length; i ++)
	{
		printf("%d ", L.data[i]);
	}

	printf("\n\n请按任意键结束。\n");
}

sqlist dellist(sqlist L, int i)
{
	dataType x;

	if(i < 1 || i > L.length)
	{
		printf("抱歉！你删除的位置有误\n\n");
	}

	else
	{
		x = L.data[i - 1];

		for(; i < L.length - 1; i ++)
		{
			L.data[i - 1] = L.data[i];
		}

		L.length--;

		printf("\n%d 已被删除。", x);
	}

	return L;
}

void main()
{
	int i;
	sqlist L;

	createlist(&L);

	printf("\n\n请输入你想要删除元素的位置 i ：");

	scanf("%d", &i);

	L = dellist(L, i);

	print(L);
}
```
## 51、编写一个程序，输入星期，输出该星期的英文名
Here is the code:

```
#include <stdio.h>
void main()
{
	int i;
    char * name[] = { "星期一","星期二","星期三","星期四","星期五","星期六","星期天"};

	printf("请输入数字 1 ~ 7，对应输出星期名。\n" );

	scanf("%d", & i);

	while(i < 1)
	{
		printf("你输入有误，请重新输入\n");

		scanf("%d", & i);
	}

	printf("Day NO : %2d --> %s\n", i, * (name + (i - 1));
}
```
## 52、输入一段字符串，判断是否回文.（回文：aba, aabbaa，1221等）
Here is the code:

```
#include <stdio.h>
#include <string.h>

void main()
{
   char str[30];
   int i = 0, j;
   printf("请输入一行字符串：\n");
   
   gets(str);

   j = strlen(str) - 1;

   while (* (str + i) == ' ')  i ++;
   while (* (str + j) == ' ')  j --;

   for(; i <= j; i ++, j --)
   {
	   if(* (str + i) != * (str + j))

		   break;
   }
   if(i >= j)

	   printf("yes");

   else 
	   printf("no");
}
```
## 52、手牵手 类约瑟夫环
Here is the code:

```
#include <stdio.h>//队的实现
#define maxsize 14

/**************************************/
typedef struct
{
	int data[maxsize];
	int front;
	int rear;
}sqQueue;
/**************************************/
void initQueue(sqQueue *s)//队的初始化
{
	s -> front = 0;
	s -> rear = 0;
}
/**************************************/
/*int Queuelength(sqQueue *s)//队的长度
{
	return (s -> rear - s -> front + maxsize) % maxsize;
}*/
/**************************************/
int EnQueue(sqQueue *s, int x)//入队
{
	if((s -> rear + 1) % maxsize == s -> front)
	{
		printf("队满");
	}
	s -> data[s -> rear] =  x;
	s -> rear = (s -> rear + 1) % maxsize;
	return 0;
}
/**************************************/
int PopQueue(sqQueue *s)
{
	int x;

	if(s -> rear == s -> front)
	{
		printf("队空");
	}
	x = s -> data[s -> front];
	s -> front = (s -> front + 1) % maxsize;
	return x;
}
/**************************************/
void main()
{

	int i = 0, j, n, m = 0;
	int a[13] = {1};
	sqQueue s;
	initQueue(&s);

	for(i = 1; i < 9; i++)//进队
	{
		EnQueue(&s, i);
	}

	for(j = 1; j < 100; j++)
	{
		if(j % 3 != 0)
		{
			n = PopQueue(&s);
			EnQueue(&s, n);
		}
		else
		{
			n = PopQueue(&s);
			a[m] = n;
			m++;
		}
			if(a[7] != 0)
			
				break;
	}
	for(m = 0; m < 8; m++)
		printf("%d ", a[m]);
	getch();
}
```
## 53、输入改变替换字符串
Here is the code:

```
#include <stdio.h>
#include <string.h>

void main()
{
	char s[50], s1[50], s2[50];
	int i, j, l, l1, m = 0;
	
	printf("首先:\n");
	gets(s);
	printf("然后:\n");
	gets(s1);

	l = strlen(s);
	l1 = strlen(s1);

	printf("最后:\n");
	gets(s2);

	for(i = 0; i < l; i++)
	{
		for(j = 0; j < l1; j++)
		{
			if(s[i] == s1[j])
			{
				s[i] = s2[j];
			}
		}
		printf("%c", s[i]);
	}
}
```
## 54、递归
Here is the code:

```
#include <stdio.h>//1+2+3⋯⋯

int fun(int n)
{
	int s;

	if(n == 1)
		s = 1;
	else
		s = fun(n - 1) + n;
	return s;
}
void main()
{
	int n;

	printf("输入数列的项数:");
	scanf("%d", &n);

	printf("%d\n", fun(n));
}
```
## 55、递归
Here is the code:

```
#include <stdio.h>//1+2+3⋯⋯

int fun(int n)
{
	int s;

	if(n == 1)
		s = 1;
	else
		s = fun(n - 1) + n;
	return s;
}
void main()
{
	int n;

	printf("输入数列的项数:");
	scanf("%d", &n);

	printf("%d\n", fun(n));
}
```
## 56、数列和
Here is the code:

```
//数列求和1+2+3⋯⋯
#include <stdio.h>

int fun(int n)
{
	int y;

	if(n == 0)
		return y = 0;
	else
		return y = fun(n - 1) + n;
}
void main()
{
	int n;

	printf("请输入项数n:");
	scanf("%d", &n);

	printf("%d\n", fun(n));
}
```
## 57、未完成
Here is the code:

```
#include <stdio.h>
#include <malloc.h>
int i;

struct young 
{
	int n;
	struct young *next;
};

struct young *creat()
{
	struct young *head;
	struct young *p1, *p2;
    i = 0;
	head = NULL;
	p1 = p2 = (struct young *)malloc(sizeof(struct young));

	
	printf("请输入七个元素编号\n");
	for(i = 0; i < 7; i++)
	{
		scanf("%d", &p1 -> n);
		p2 -> next = p1;
		p2 = p1;
		p1 = (struct young *)malloc(sizeof(struct young));
	}
	p2 -> next = head;
	return head;
}

void fun(struct young *head)
{
	struct young *p;
	int j = 0;
	i = 0;

	while(j < 1000)
	{
		if(p -> n == 0)
		{
			p = p -> next;
		}
		else
		{
			j++;
			if(j % 3 == 0)
			{
				i++;
				p -> n = 0;
				p = p -> next;
			}
			else
			{
				p = p -> next;
			}
		}
		if(i == 6)
			break;
	}
}

void print(struct young *head)
{
	struct young *p;
	p = head;
	i = 0;

	while(i < 7)
	{
		printf("%d ", p -> n);
		p = p -> next;
		i++;
	}
}

void main()
{
	struct young *head;
	head = creat();
	fun(head);
	print(head);
	printf("\n");
}
```
## 58、新娘配对
Here is the code:

```
#include <stdio.h>

void main()
{
	int x, y, z, i, j;

	for(x = 1; x <= 3; x++)
	{
		if(x != 1 && x != 3)
		{
			printf("x->%d\n", x);
			i = x;
			break;
		}
	}
	for(z = 1; z <= 3; z++)
	{
		if(z != 3 && z != i)
		{
			printf("z->%d\n", z);
			j = z;
			break;
		}
	}
	for(y = 1; y <= 3; y++)
	{
		if(y != i && y != j)
		{
			printf("y->%d\n", y);
			break;
		}
	}
}
```
## 59、性指数
Here is the code:

```
#include <stdio.h>
/*性指数*/
/*3025 = (30 + 25) ^ 2*/
void main()
{
	int n, ab, cd;

	for(n = 1000; n < 10000; n++)
	{
		ab = n / 100;
		cd = n % 100;

		if(n == ab * ab + 2 * ab * cd + cd * cd)
		{
			printf("%d ", n);
		}
	}
}
```
## 60、优化报数问题，类约瑟夫环
Here is the code:

```
#include <stdio.h>
#include <malloc.h>
int i;

struct young 
{
	int n;
	struct young *next;
};

struct young *creat()
{
	struct young *head;
	struct young *p1, *p2;
   
	head = p2 = (struct young *)malloc(sizeof(struct young));
	p2 -> next = NULL;
	
	printf("请输入七个元素编号\n");

	for(i = 1; i <= 6; i++)
	{
		p1 = (struct young *)malloc(sizeof(struct young));
		scanf("%d", &p1 -> n);
		p1 -> next = NULL;
		p2 -> next = p1;
		p2 = p1;		
	}
	
	p2 -> next = head->next;

	return head;
}

void fun(struct young *head)
{
	struct young *p;
	int j = 0;
	i = 0;
	p = head -> next;

	while(j < 1000)
	{
		if(p -> n == 0)
		{
			p = p -> next;
		}
		else
		{
			j++;
			if(j % 3 == 0)
			{
				i++;
				p -> n = 0;
				p = p -> next;
			}
			else
			{
				p = p -> next;
			}
		}
		if(i == 5)
			break;
	}
}

void print(struct young *head)
{
	struct young *p,*first;
	p=first = head->next;
    
	do
	{
		printf("%d ", p -> n);
		p = p -> next;
	}while(p != first);

	getch();
}

void main()
{
	struct young *head;
	head = creat();
	fun(head);
	print(head);
	printf("\n");
}
```
## 61、约瑟夫环
Here is the code:

```
#include <stdio.h>
#include <malloc.h>
int i;

struct num
{
	int n;
	struct num *next;
};

struct num *creat()
{
	struct num *head;
	struct num *p1, *p2;
	i = 0;
	head = NULL;
	p1 = p2 = (struct num*)malloc(sizeof(struct num));
	p1 -> n = 1;

	while(i < 30)
	{
		i = i + 1;
		if(i == 1)
		{
			head = p1;
		}
		else
		{
			p2 -> next = p1;
		}
		p2 = p1;
		p1 = (struct num*)malloc(sizeof(struct num));
		p1 -> n = 1;
	}

	p2 -> next = head;
	return head;
}
void fun(struct num *head)
{
	int j;
	struct num *p;
	p = head;
	i = 0;
	

	for(j = 0; j < 10000; )
	{
		if(p -> n == 0)
		{
			p = p -> next;
			j = j;
		}
		else
		{
			j = j + 1;
			if(j % 9 == 0)
			{
				p -> n = 0;
				i = i + 1;
			}
			else
			{
				p = p -> next;
			}
		}
		if(i == 15)
			break;
	}
}

void print(struct num *head)
{
	struct num *p;
	p = head;
	i = 0;

	while(i < 30)
	{	
		i++;
		printf("%d ", p -> n);
		p = p -> next;
	}
}

void main()
{
	struct num *head;
	head = creat();
	fun(head);
	print(head);
	printf("\n");
}
```
## 62、栈的实现
Here is the code:

```
#include <stdio.h>//栈的实现
#define maxsize 100

/**********************************************/
typedef struct
{
	int data[maxsize];
	int top;
}sqstack;
/**********************************************/
int initstack(sqstack *s)
{
	return s -> top = -1;
}
/**********************************************/
int full(sqstack *s)
{
	return s -> top == maxsize - 1;
}
/**********************************************/
int empty(sqstack *s)
{
	return s -> top == -1;
}
/**********************************************/
void push(sqstack *s, int x)
{
	if(full(s))
	{
		printf("栈满");
	}
	else
	s -> data[++s -> top] = x;
}
/**********************************************/
int pop(sqstack *s)
{
	if(empty(s))
	{
		printf("栈空");
	}
	 return s -> data[s -> top--];
}
/**********************************************/
void main()
{
	int n, m;
	sqstack s;
	initstack(&s);

	scanf("%d", &n);

	while(n != 0)
	{
		push(&s, n % 2);
		n = n / 2;
	}
	while(!empty(&s))
	{
		m = pop(&s);
		printf("%d", m);
	}
}
```
## 63、纸牌排序
Here is the code:

```
#include <stdio.h>
#include <string.h>
#include <malloc.h>

struct stu
{
	char str[5];
	struct stu *next;
};

int n;

struct stu * creat()
{
	struct stu * head;
	struct stu * p1, * p2;

	head = NULL;
	n = 0;

	p1 = p2 = (struct stu *) malloc (sizeof (struct stu));

	strcpy(p1 ->str ,"1");

	while(n < 13)
	{
		n = n + 1;

		if(n == 1)

			head = p1;

		else

			p2 ->next = p1;

		p2 = p1;

		p1 = (struct stu *) malloc (sizeof (struct stu));

        strcpy(p1 ->str ,"1");
	}

	p2 ->next = head;

	return head;
}

void fun(struct stu * head, char a[13][5])
{
	struct stu * p;
	int i, j = 0;

	p = head;
	n = 0;

	for(i = 0; i < 10000;)
	{
		if((strcmp(p ->str, "1")) != 0)
		{
			p = p ->next;
		}

		else
		{
			i = i + 1;

			if(i % 2 == 0)
			{
				strcpy(p -> str ,a[j]);
				p = p ->next;
				j++;
			}

			else 

				p = p ->next;
		}

		if(j == 13)

			break;
	}

	return head;

}

void print(struct stu * head)
{
	struct stu * p;

	p = head;
	n = 0;

	while(n < 13)
	{
		n = n + 1;

		printf("%-4s", p -> str);

		p = p ->next;
	}
}

void main()
{
	char a[13][5] = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};

	struct stu * head;

	head = creat();

	fun(head, a);

	print(head);

	printf("\n\n"); //用循环链表，进行排序。
}
```
## 64、从一个三行四列的整型二维数组中查找第一个出现的负数
Here is the code:

```
#include <stdio.h>

int main()
{
	int a[3][4];
	int i, j;

	printf("请输入一个三行四列的整数\n");

	for(i = 0; i < 3; i ++)
	{
		for(j = 0; j < 4; j ++)

			scanf("%d", * (a + i) + j);
	}

	for(i = 0; i < 3; i ++)
	{
		for(j = 0; j < 4; j ++)
		{
			if(* (* (a + i) + j) < 0)

				break;
		}

		if(* (* (a + i) + j) < 0)

			break;


	}

	printf("第一个负数为：");

	printf("%d\n", * (* (a + i) + j));
}
```
## 65、矩阵对角线的和
Here is the code:
```
#include <stdio.h>

int main()
{
	int a[5][5], i, j;
	int sum = 0;

	for(i = 0; i < 5; i ++)

		for(j = 0; j < 5; j ++)

			scanf("%d", * (a + i) + j);

	for(i = 0; i < 5; i ++)
	{
		for(j = 0; j < 5; j ++)
		{
			if(i % 4 == j % 4 || i + j == 4)

				sum = sum + * (* (a + i ) + j);
		}

	}

	printf("%d\n", sum);
}
```
## 66、抓小偷
Here is the code:

```
#include <stdio.h>
/*抓小偷*/
/*1就是小偷*/
/*本题是以乙为切入点*/
void main()
{
	int a[4];
	int i, j;

	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			a[i] = 1;//依次判定是不是小偷
			a[j] = 0;//0就不是小偷
		}
		if(a[1] + a[3] == 1 && a[1] + a[2] == 1 && a[0] + a[1] == 1)
		{
			if(a[0] == 1)
			{
				printf("甲是小偷\n");
			}

			if(a[1] == 1)
			{
				printf("乙是小偷\n");
			}

			if(a[2] == 1)
			{
				printf("丙是小偷\n");
			}

			if(a[3] == 1)
			{
				printf("丁是小偷\n");
			}
		}
	}
}
```
## 67、任意进制转换
Here is the code:

```
#include <stdio.h>

void main()
{
	int n, i = 0, j = 0, m;
	int b[10];

	printf("请输入一个整数:");
	scanf("%d", &n);
	printf("想转的进制的数:");
	scanf("%d", &m);
	while(n != 0)
	{
		b[j] = n % m;
		n = n / m;
		j++;
	}
	for(j = j - 1; j >= 0; j--)
		printf("%d", b[j]);	
}

```
## 68、字符排版
Here is the code:

```
#include <stdio.h>
#include <string.h>

int sp(char st[100])
{
	int i, n = 0;

	for(i = 0; * (st + i) != '\0'; i ++)
	{
		if(* (st + i) == ' ')

			n ++;
	}

	return n;
}

int num(char st[100])
{
	int j = 0, m = 0;
	int i;

	for(i = 0; * (st + i) != '\0'; i ++)

		if(* (st + i ) == ' ')

			j = 0;

		else if(j == 0)
		{
			j = 1;
			m ++;
		}

	return m;
} 

void main()
{
	char st[100], st1[100];
	int i, j = 0, k = 0;
	int n, m ;  //拿来呈递上面调用函数返回来的值。

	printf("请任意输入一行字符串，我们将会为你排版。\n\n");

	gets(st);

	n = sp(st) / (num(st) - 1);

	for(i = 0, m = 0; * (st + i) != '\0'; i ++)
	{
		if(* (st + i) == ' ') 

			k = 1;

		else if(k == 1)
		{
			k = 0;

			while(m != (n + 1))
			{
				* (st1 + j + m) = ' ';
				m ++;
			}

			* (st1 + j + n) = * (st + i);

			j = j + n + 1;

			m = 0;
		}

		else 
		{
			* (st1 + j ) = * (st + i);
			
			j = j + 1;
		}
	}
	k = j;

	printf("\n\n输出已经排版好的顺序：\n\n");

	for(j = 0; j < k; j ++)
	{
		printf("%c", * (st1 + j));
	}

	printf("\n\n");
}
```
## 69、自守数
Here is the code:

```
#include <stdio.h>
#include <math.h>
/*25 * 25 = 625*/
void main()
{
	int n, i, k, j, last = 1;

	for(n = 0; n < 200000; n++)
	{
		for(j = 1; j <= 2; j++)
		{
			if(n < 10)
			{
			last = last * n % 10;
			}
			else if(n >= 10 && n < 100)
			{
				last = last * n % 100;
			}
			else if(n >= 100 && n < 1000)
			{
				last = last * n % 1000;
			}
			else if(n >= 1000 && n < 10000)
			{
				last = last * n % 10000;
			}
			else if(n >= 10000 && n < 100000)
			{
				last = last * n % 100000;
			}
			else if(n >= 100000 && n <= 200000)
			{
				last = last * n % 1000000;
			}
		}
		if(last == n)
		{
			printf("%ld ", last);
			last = 1;
		}
		last = 1;
	}	
}

#include <stdio.h>
/*25 * 25 = 625*/
void main()
{
	int i;
	for(i = 0;i < 200000; i++)
	{
		if(i < 10)
			if(i == i * i % 10)
				printf("%d   ",i);
		if(i >= 10 && i < 100)
			if(i == i * i % 100)
				printf("%d   ",i);
		if(i >= 100 && i < 1000)
			if(i == i * i % 1000)
				printf("%d   ",i);
		if(i >= 1000 && i < 10000)
			if(i == i * i % 10000)
				printf("%d   ",i);
		if(i >= 10000 && i < 100000)
			if(i == i * i % 100000)
				printf("%d   ",i);
		if(i >= 100000 && i < 1000000)
			if(i == i * i % 1000000)
				printf("%d   ",i);
	}
}
```
## 70、二叉树创建于遍历
Here is the code:

```
#include<stdio.h>
#include<stdlib.h>

typedef struct BiTNode
{
	char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;

void CreatBiTree(BiTree &T)
{//前序法创建二叉树
	char ch;
	if((ch=getchar())=='\n')
		T=NULL;
	else
	{
		T=(BiTNode*)malloc(sizeof(BiTNode));
		if(!T)
			exit(1);
		T->data=ch;
		CreatBiTree(T->lchild);
		CreatBiTree(T->rchild);
	}
}

void PreTravel(BiTree &T)
{//前序遍历
	if(T)
	{  
		printf("%c",T->data);
		PreTravel(T->lchild);
		PreTravel(T->rchild);
	}
}

void MidTravel(BiTree &T)
{//中序遍历
	if(T)
	{  
		MidTravel(T->lchild);
		printf("%c",T->data);
		MidTravel(T->rchild);
	}
}

void PostTravel(BiTree &T)
{//后序遍历
	if(T)
	{  
		PostTravel(T->lchild);
		PostTravel(T->rchild);
		printf("%c",T->data);
	}
}

void main()
{ 
	BiTree T;
	printf("please input the bitree:\n" );
    CreatBiTree(T);
/**********************************/
	printf("The Pretravel is:\n");
	PreTravel(T);
	printf("\n");
/**********************************/
	printf("The Midtravel is:\n");
	MidTravel(T);
	printf("\n");
/**********************************/
	printf("The PostTravel is:\n");
	PostTravel(T);
	printf("\n");

};
```