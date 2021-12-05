#define _CRT_SECURE_NO_WARNINGS 1
#define bit 32//32位计算机的二进制数个数
#include<stdio.h>
int number1(int n)
{
	int x = 1;
	int i = 0;
	int count = 0;
	for (i = 0; i < bit; i++)
	{
		if ((x & n) != 0)
		{
			count++;
		}
		x <<= 1;
	}
	return count;
}
int main()
{
	int x = 0;
	int y = 0;
	int n = 0;
	scanf("%d%d", &x,&y);
	n = x ^ y;
	printf("%d",number1(n));
	return 0;
}
 