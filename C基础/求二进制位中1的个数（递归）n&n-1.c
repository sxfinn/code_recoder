#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int number1(int n)
{
	
	if (n != 0)
		return  1 + number1(n & (n - 1));
	else
		return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d",number1(n));
	return 0;
}
 