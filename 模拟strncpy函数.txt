void my_strncpy(char*a,char*b,int count)
{
	while (count-- && (*a++ = *b++)!='\0');
	while (count--)
	{
		*a++ = '\0';
	}
}
int main()
{
	char b[] = "abcdfghjkl";
	char a[] = "qwe";
	strncpy(b, a, 5);
	printf("%s",b);
	return 0;
}