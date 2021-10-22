#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
fg_jp(int n)
{
	if (n <= 2)
	{
		return n;
	}
	else
	{
		return fg_jp(n - 1) + fg_jp(n - 2);
	}
}
int main()
{
	int n = 0;
	int i = 0;
	scanf("%d",&n);
	i = fg_jp(n);
	printf("%d", i);
	return 0;
}