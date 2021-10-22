#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
int cal(int x)
{
	if (x > 1)
	{
		return x * cal(x - 1);
	}
	else
		return 1;
}
int main()
{
	int n = 0;
	printf("请输入n:");
	scanf("%d", &n);
	printf("%d",cal(n));
	return 0;
}