vovoid *my_memcpy(void* dest, void* source, int num)
{
	void* ret = dest;
	char* tmp = (char*)dest;		//强制类型转换赋给一个该类型变量，后面再使用时就可以直接使用该变量
	char* tmp1 = (char*)source;		//避免了后面再多次使用强制类型转换操作
	assert(dest && source);
	int i = 0;
	for (i = 0; i < num; i++)
	{
		//*(char*)dest = *(char*)source;//可以将这三部改成下面的一步
		//((char*)dest)++;		//也可以改成*（char*)dest++=*(char*)source;
		//((char*)source)++;
		*tmp++ = *tmp1++;
	}
	return ret;
}
int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9, };
	int b[10] = { 0 };
	my_memcpy(b, a, 12);
	
	return 0;
}