int main()
{
	int a, b, c;
	int m1, m2, m3;
	scanf("%d%d%d", &a, &b, &c);
	if (a > b && a > c)
	{
		if (b > c) 
		{
			m1 = a;
			m2 = b;
			m3 = c;
		}
		else
		{
			m1 = a;
			m2 = c;
			m3 = b;
		}
	}
	else if (b > a && b > c)
	{
		if (a > c)
		{
			m1 = b;
			m2 = a;
			m3 = c;
		}
		else
		{
			m1 = b;
			m2 = c;
			m3 = a;
		}
	}
	else if (c > a && c > b)
	{
		if (a > b)
		{
			m1 = c;
			m2 = a;
			m3 = b;

		}
		else
		{
			m1 = c;
			m2 = b;
			m3 = a;
		}
	}
	printf("%d %d %d", m1, m2, m3);
	return 0;
}