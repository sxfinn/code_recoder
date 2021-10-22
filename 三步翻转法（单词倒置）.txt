#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
void reverse(char*left,char*right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	char a[100] = {0};
	int len = 0;
	int start = 0;
	int end = 0;
	gets(a);
	len = strlen(a);
	reverse(a,a+len-1);
	while (*(a+start)!='\0')
	{
		end = start;
		while (*(a+end)!=' '&&*(a+end)!='\0')
		{
			end++;
		}
		reverse(a + start, a + end-1);
		if (*(a + end) == ' ')
		{
			start = end + 1;
		}
		else
		{
			start = end;
		}
	}
	printf("%s", a);
	return 0;
}