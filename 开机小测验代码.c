#include<stdio.h>
#include<string.h>
#include<stdlib.h>//system函数头文件
#include<windows.h>//Sleep函数头文件
int main()
{
	int x;
	int ret;
	int i = 0;
	char a[20] = "0";
	char d[20] = "123456";
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码；");
		scanf("%s", a);
		int ret = 1;
		for (x = 0; x < 21; x++)//这里可以不用一一判断是否相等，可以使用strcmp库函数
		{						//if(strcmp(a,"123456")==0){}
			if (a[x] != d[x])
			{
				ret = 0;
				printf("密码错误");
				break;
			}
		}
		if (ret)
		{
			printf("密码正确");
			break;
		}
	}
	if (i == 3)
		printf("三次密码错误，您已经无法再输入");

return 0;
}