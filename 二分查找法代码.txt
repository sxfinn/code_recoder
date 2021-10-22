#include<stdio.h>
#include<string.h>
int main()
{
	int mid= 0;
	int s = 0;
	int n;
	int a[] = {1,2,3,4,5,6,7,8,9,10,11,};//必须是有序数组
	int left=0;
	int sz = sizeof(a) / sizeof(a[0]);
	int right=sz-1;
		scanf("%d",&n);
	
	while (left<=right)
	{
		mid = (left + right) / 2;

		if (a[mid] == n)
		{
			printf("下标是：%d", mid);
			s = 1;
			break;
		}
		else if(a[mid]<n)
		{ 
			left=mid+1;
			
		}else if (a[mid] > n)
		{
			right = mid- 1;
				
		}

	}if (s == 1)
	{
		printf("找到了");
	}
	else if(s==0) printf("没找到");

return 0;
}