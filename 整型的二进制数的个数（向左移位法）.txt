#define _CRT_SECURE_NO_WARNINGS 1
#define bit 32//32位计算机的二进制数个数
#include<stdio.h>
#include<assert.h>
int main()
{
	int n = 0;
	int i = 1;
	int count = 0;
	int sum = 0;
	scanf("%d", &n);
	for (sum=0;sum<bit;sum++)
	{
		if ((i & n) != 0)
		{
			count++;
		}
		i <<= 1;
	}
	printf("二进制补码中 1 的个数为：%d", count);
	return 0;
}
 