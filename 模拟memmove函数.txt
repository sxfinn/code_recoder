my_memmove(void* dest, void* source, int num)
{
	void* ret = dest;
	assert(dest && source);
	if (dest > source)
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)source + num);//从后到前
		}														
	}
	else
	{
		while (num--)
		{
			*(char*)dest = *(char*)source;
			((char*)dest)++;							//从前到后
			((char*)source)++;
		}													
	}
	return ret;
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9, };
	my_memmove(a, a + 1,12);
	return 0;
}