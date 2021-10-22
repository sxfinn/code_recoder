#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
void reverse(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++, sz--)
	{
		int tmp = arr[i];
		arr[i] = arr[sz - 1];
		arr[sz - 1] = tmp;
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10,11};
	int sz = sizeof(a) / sizeof(a[0]);
	reverse(a, sz);
	print(a, sz);
	
	return 0;
}