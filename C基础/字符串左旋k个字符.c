#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void str_rev(char* a, int k)
{
	int i = 0;
	int n = strlen(a);
	for (i = 0; i < k; i++)					//左旋转k次
	{
		char tmp = *a;						//第一步,将第一个字符挪动到tmp
		int j = 0;
		for (j = 0; j < n-1; j++)			//二；将后面的n-1个字符依次向前移位
		{
			*(a + j) = *(a + j + 1);
		}
		*(a + n - 1) = tmp;					//三：将tmp中的字符移动到最后一位
	}
}
int main()
{
	int k =3;
	char arr[] = "abcdefg";
	str_rev(arr,k);
	printf("%s", arr);
	return 0;
}