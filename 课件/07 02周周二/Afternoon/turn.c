void turn(long m)
{
	if (m >= 10)
	{
		printf("%d ", m % 10);
		turn(m / 10);
	}
	else 
		printf("%d", m);
}
main()
{
	long n;
	printf("\nInput a number:");
	scanf("%ld", &n);
	printf("\The turn is : ");
	turn(n);
}
