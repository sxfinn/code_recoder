int main()
{
	int x;
	int y;
	int t;
	scanf("%d%d", &x, &y);	
	while (x%y)
	{
		t = x%y;
		x = y;
		y = t;
	}
	printf("%d", y);
	return 0;
}