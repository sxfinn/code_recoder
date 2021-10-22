#include<stdio.h>
#include<string.h>
#include<stdlib.h>//system函数头文件
#include<windows.h>//Sleep函数头文件

int main()
{
	
	char a[] = "welcome to bit!!!!!!!";
	char b[] = "#####################";	
	int sz = sizeof(a) / sizeof(a[0]);
	int left = 0;
	int right = sz - 2;//这里可以用strlen函数
	while(left<=right)
	{	
		b[left] = a[left];
		left++;
		b[right] = a[right];
		right--;
		printf("%s\n", b);
		Sleep(1000);//运行到此休息1秒
		system("cls");//清空屏幕
	}
		printf("%s",b);

return 0;
}