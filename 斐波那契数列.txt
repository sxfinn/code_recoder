#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
int fib(int n)
{
	int a = 1;
	int b = 1;
	int ret = 1;
	while (n>2)
	{
		ret = a + b;
		a = b;
		b = ret;
		n--;
	}
	return b;
}
int main()
{
	int n = 0;
	int i = 0;
	scanf("%d",&n);
	i = fib(n);
	printf("%d", i);
	return 0;
}