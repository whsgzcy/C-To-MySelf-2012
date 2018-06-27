#include <stdio.h>

int maxnum( int x, int y)
{
	int j;
	for(j=x; j<=x*y; j++)
		if(j%x==0&&j%y==0)
			break;
			return j;

}
int multiple(int x, int y)
{
	int j;
	for(j=x; j>=1; j--)
		if(x%j==0&&y%j==0)
			break;
			return j;

}
void main()
{
    int x, y;
	printf( "请输入两个数\n" );
	scanf( "%d %d", &x, &y);
	printf("\n最小公倍数是  %d\n",  maxnum(x, y));
	printf("\n最大公约数是   %d\n",  multiple(x,y));
	getch();
}
