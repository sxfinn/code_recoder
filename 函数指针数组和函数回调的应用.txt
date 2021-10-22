#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int cal(int (*p)(int ,int ))
{
	printf("请输入两个操作数");
	scanf("%d %d", &x, &y);
	return p(x, y);

}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
void meum()
{
	printf("*********\n");
	printf("***1/0/2****\n");
	printf("*********\n");
}
int main()
{
	int(*pfrr[3])(int, int) = {NULL,add,sub };
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		meum();
		printf("请选择>\n");
		scanf("%d", &input);
		if (input == 0)
		{
			printf("退出\n");
			break;
		}
		else if (input < 1 || input > 2)
		{
			printf("选择错误重新选择\n");
			continue;
		}
		
		ret = cal(pfrr[input]);
		printf("%d\n", ret);
	}
	while(input);
	return 0;
}