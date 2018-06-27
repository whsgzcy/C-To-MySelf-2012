int peach(int day) 
{
	int n; 
	if (day == 10) n = 1;
	else n = 2*(peach(day + 1) + 1);
}
main()
{
	printf(¡°\nPeachs in day 1 is: %d\n¡±, peach(1));
}
