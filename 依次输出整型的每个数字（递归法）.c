#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
void print(int n)
{
	if(n>9)
	print(n / 10);
	printf("%d ", n % 10);
}
int main()
{
	int i = 0;
	printf("请输入一个数：");
		scanf("%d", &i);
		print(i);
	return 0;