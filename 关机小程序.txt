#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
#include<stdlib.h>//system函数头文件
//#include<windows.h>//Sleep函数头文件
#include<time.h>//time函数头文件
int main()
{
	char arr[20] = { 0 };
	printf("您的电脑会在60s内关闭");

	system("shutdown -s -t 60");
	printf("请输入 我是猪 终止关机");
		
		while (1)
		{
			scanf("%s", arr);
			if (strcmp(arr, "我是猪") == 0)
			{
				system("shutdown -a");
				break;
			}
			else
				printf("输入错误，请再次输入");
		}

	return 0;
}