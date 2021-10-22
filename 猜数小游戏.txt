#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
#include<stdlib.h>//system函数头文件
//#include<windows.h>//Sleep函数头文件
#include<time.h>
void menu()
{
	printf("\n1 play\n");
	printf("\n0 exit\n");
}
void game()
{
	int a = rand()%100+1;	
	int ret = 0;
	while (1)
	{
		printf("请输入随机数：");
		scanf("%d", &ret);
		if (ret > a)
		printf("猜大了\n");
		else if (ret < a)
		printf("猜小了\n");
		else
		{
		printf("猜对了\n");
		break;
		}
	}
}
int main()
{
	
	srand((unsigned int) time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:game();
			break;
		case 0:printf("退出游戏");
			break; 
		default:printf("输入错误请重新输入");
			break;
		}

	} while (input);
	return 0;
}