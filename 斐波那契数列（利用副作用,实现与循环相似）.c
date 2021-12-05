#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
int fib(int x, int y, int n)
{
	int z = x + y;
	if (n > 3)
	{
		x = y;
		y = z;
		fib(x, y, n - 1);
	}
	else if (n <= 2)
		return 1;
	else
		return z;
}
int main()
{
	int n = 10;
	int i=fib(1, 1, n);
	printf("%d", i);
	return 0;
}