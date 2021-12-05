方法一：将1的二进制位左移，判断为1/0，再打印出来
int number2(int n)//偶数位
{
	int i = 0;
	int x = 1;
	int t = x;
	for (i = 31; i >=0; i--)//这里可优化为i-2
	{
		x = t;
		x <<= i;
		if (i % 2 == 1)
		{
			if ((n & x) != 0)
				printf("1");
			else
				printf("0");
		}
		
	}
}
int number1(int n)//奇数位
{
	int i = 0;
	int x = 1;
	int t = x;
	for (i = 31; i >=0; i--)//这里可优化为i-2
	{
		x = t;
		x <<= i;
		if (i % 2==0)
		{
			if ((n & x) != 0)
				printf("1");
			else
				printf("0");
		}
		
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("奇数位");
	number1(n);
	printf("\n");
	printf("偶数位");
	number2(n);
	
	return 0;
}
 


//方法二（将目标数二进制右移，判断每一位数为0/1再打印出来）
int main()
{
	int n = 0;
	int i = 0;
	scanf("%d", &n);
	for (i = 31; i > 0; i -= 2)//打印偶数位
	{
		printf("%d", (n >>i) & 1);
	}
	printf("\n");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d", (n >>i) & 1);
	}
	return 0;
}