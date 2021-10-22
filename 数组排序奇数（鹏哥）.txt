#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void move(int a[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		while (left < right && a[left] % 2 != 0)
		{
			left++;
		}
		while (left < right && a[right] % 2 != 1)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = a[left];
			a[left] = a[right];
			a[right] = tmp;
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = 9;
	move(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}