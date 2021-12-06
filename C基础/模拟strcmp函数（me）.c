int my_strcmp(const char* a, const char* b)
{
	assert(a && b);
	int ret = 0;
	while (*a||*b)
	{
		if (*a < *b)
		{
			ret = -1;
			break；

		}
		else if (*a > *b)
		{
			ret = 1;
			break；
		}
		a++;
		b++;
	}
	return ret;
}
int main()
{	
	int a=my_strcmp("abc", "abcg");
	printf("%d", a);
	return 0;
}