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
	printf( "������������\n" );
	scanf( "%d %d", &x, &y);
	printf("\n��С��������  %d\n",  maxnum(x, y));
	printf("\n���Լ����   %d\n",  multiple(x,y));
	getch();
}
