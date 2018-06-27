long fact(int n)
{
	long f = 0; 
	if (n < 0)
		printf("n < 0, error!");
	else if (n == 0 || n ==1)
		f = 1;
	else f = fact(n - 1) * n;
	return (f);
}
void main()
{
	int n;
	printf("\nInput data n:");
	scanf("%d", &n);
	printf("\n %d! = %ld\n", n, fact(n)); 
}

