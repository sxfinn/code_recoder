void insert_sort(int arr[], int sz)
{
	for (int i = 1; i < sz; i++)
	{
		int tmp = arr[i];
		int left = 0;
		int right = i - 1;
		int mid = 0;
		while (left <= right)   //利用二分法找到插入的位置
		{
			mid = (left + right) / 2;
			if (tmp < arr[mid])
				right = mid - 1;
			else                    //为保证排序的稳定性，在arr[mid] == tmp时，继续查找右边的部分
				left = mid + 1;
		}
                                    //最终结果永远是left在right的右边，也就是left右边的部分包括本身都是大于
                                    //tmp的依次往后移动。
		for (int j = i; j > left; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[left] = tmp;
	}
}

