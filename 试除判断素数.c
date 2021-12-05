int main()
{
	int i;
	int x;
	
	for (i = 100;i<200 ; i++)
	{
		int ret = 1;
		for (x = 2; x < i; x++)
		{
			if (i % x == 0)
			{
				ret = 0;
				break;
			}
		}
		if (ret)
			printf("%d\n", i);
	}
	return 0;
}