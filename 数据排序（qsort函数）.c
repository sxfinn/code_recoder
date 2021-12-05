#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int px(const void* a, const void* b)
{
	return -(*(int*)a - *(int*)b);//强制类型转换：只有转换成该数组里的类型，才能通过解引用正确访问其中的元素并比较大小
}
int main()
{
	int i = 0;
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = 9;
	qsort(arr, sz,sizeof(int), px);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}