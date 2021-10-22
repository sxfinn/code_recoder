int my_strcmp(char* a, char* b)
{
	while (*a == *b&&*a)
	{
		a++;
		b++;
	}
	return *a - *b;
}
int main()
{
	int a=my_strcmp("abcg", "abcd");
	printf("%d", a);
	return 0;
}