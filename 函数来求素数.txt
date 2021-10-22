#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int x = 1;
	int ret = 1;
	for (x = 2; x <= sqrt(n); x++)
	{
		if (n % x==0)
		{
			ret = 0;
		}
	}
	return ret;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d\n", i);
			count++;
		}
	}
	printf("%d", count);
	return 0;
}