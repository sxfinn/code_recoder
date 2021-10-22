int main()
{
	int a;
	int b;
	int c;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		int p = a;
		a = b;
		b = p;
	}
	if (a < c)
	{
		int p = a;
		a = c;
		c = p;
	}
	if (b < c)
	{
		int p = b;
		b = c;
		c = p;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}