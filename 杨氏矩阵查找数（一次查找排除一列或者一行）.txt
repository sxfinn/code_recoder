#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define ROW 3
#define COL 3
int search(int a[ROW][COL], int*px, int* py, int k)
{
	while (*px<ROW&&*py>=0)
	{
		if (a[*px][*py] < k)
		{
			(*px)++;
		}
		else if (a[*px][*py] > k)
		{
			(*py)--;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr [ROW][COL] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	int x = 0;
	int y = COL-1;
	int ret = 0;
	scanf("%d", &k);
	ret=search(arr, &x, &y, k);
	if (ret == 1)
	{
		printf("%d %d\n", x, y);
		printf("找到了\n");
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}