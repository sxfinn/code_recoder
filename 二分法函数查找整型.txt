#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int search(int arr[], int n,int sz)
{
	int ret = -1;
	int left = 0;
	int right = sz- 1;
	int mid;
	while (left<= right)
	{
		mid = (left + right) / 2;
		if (n > arr[mid])
			left = mid + 1;
		else if (n < arr[mid])
			right = mid - 1;
		else
		{
			ret = mid;
			break;
		}
	}
	return ret;
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 0;
	printf("请输入要查找的数字：");
	scanf("%d", key);
	int i=search(a,key, sizeof(a) / sizeof(a[0]));
	if (i!=-1)
	{
		printf("找到了，下标是；[%d]", i);
	}
	else
		printf("没找到");

	return 0;
}