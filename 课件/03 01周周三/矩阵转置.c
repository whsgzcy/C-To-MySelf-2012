#include  <stdio.h>

void reverse( int x[ ][2], int y[ ][3] );
main( )
{	int  x[ 3 ][ 2 ] = { {1,2}, {3,4}, {5,6} };	int  *p, y[ 2 ][ 3 ];	reverse( x, y );		/*  矩阵转置  */
	p = &y[0][0];		/*  取首地址  */	while( p <= &y[ 1 ][ 2 ] )		printf(“%d, ”, *p++ );	/*  打印1,3,5,2,4,6,*/
}
void reverse( int x[ ][ 2 ], int y[ ] [ 3 ] )
{	int  i, j;	for( i=0; i<3; i++ )
		for( j=0; j<2; j++ )
			y[ j ][ i ] = x[ i ][ j ];
}