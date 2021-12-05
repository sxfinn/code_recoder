int main()
{
	int year;
	int i = 0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0&&year%100!=0)//能被4整除但不能被100整除的数为闰年
		{
			printf("%d\n", year);
			i++;
		}
		else if(year%400==0)//或者能被400整除的数为闰年
		{
			printf("%d\n", year);
			i++;
		}
	}
	printf("%d", i);
	return 0;
}