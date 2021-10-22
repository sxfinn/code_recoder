int main()
{
	int x = 0;
	int y = 0;
	int n = 0;
	int i = 1;
	int count = 0;
	scanf("%d%d", &x,&y);
	for (n = 0; n < bit; n++)
	{
		if ((x & i)!=(y & i))
		{
			count++;
		}
		i <<= 1;
	}
	printf("%d", count);
	return 0;
}
 