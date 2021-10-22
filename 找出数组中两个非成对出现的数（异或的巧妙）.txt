void search(int* p, int sz,int*x,int*y)
{	
	int ret = 0;
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= p[i];
	}
	int j = 0;
	for (j = 0; j < 32; j++)
	{
		if (ret & (1 << j))
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if ((p[i] & (1 << j))==0)
		{
			*x ^= p[i];
		}
		else
		{
			*y ^= p[i];
		}
	}
}

int main()
{
	int x = 0;
	int y = 0;
	int arr[10] = { 1,1,2,2,3,4,6,5,4,3 };
	search(arr,10,&x,&y);
	printf("%d %d", x, y);
	return 0;
}