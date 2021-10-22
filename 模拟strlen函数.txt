int my_strlen(char* p)
{
	int num = 0;
	while (num++, *p++);
	return num-1;
}
int main()
{
	char a[] = "wocaonima";
	int i = my_strlen(a);
	printf("%d", i);
	
	return 0;
}