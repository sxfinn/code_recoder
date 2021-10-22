#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
void exchange(int arr1[],int arr2[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
		
}

int main()
{
	int i = 0;
	int arr1[] = {1,2,3,4,5,6,7,8,9};
	int arr2[] = {9,8,7,6,5,4,3,2,1}; 
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	exchange(arr1,arr2,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}