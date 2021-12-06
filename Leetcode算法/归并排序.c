//归并排序
void merge_sort(int arr[], int l ,int r)
{
	if (l >= r)
		return;
	int* tmp = (int*)malloc(sizeof(int) * (r - l + 1));
	int mid = (l + r) / 2;
	merge_sort(arr, l, mid);
	merge_sort(arr, mid + 1, r);
	int p = 0;
	int pl = l;
	int pr = mid + 1;
	while (pl <= mid || pr <= r)
	{
		if (pl > mid)
		{
			tmp[p++] = arr[pr++];
		}
		else if (pr > r)
		{
			tmp[p++] = arr[pl++];
		}
		else
		{
			if (arr[pl] > arr[pr])
			{
				tmp[p++] = arr[pr++];
			}
			else
			{
				tmp[p++] = arr[pl++];
			}
		}		
	}
	for (int i = 0; i < r - l + 1; i++)
	{
		arr[l + i] = tmp[i];
	}
	free(tmp);
}
int main()
{
	int arr[] = { 2,6,8,3,7,0,1,3,7,5,68, };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int l = 0;
	int r = sz - 1;
	merge_sort(arr,l, r );
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}