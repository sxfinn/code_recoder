char* my_strstr(char*str1,char*str2)
{
	if (str2 == NULL)         //  指向空字符串时 str2 指向的时终止字符'\0'，也就是指向0，为NULL（空字符串）
	{
		return str1;
	}
	char* s1= NULL;
	char* s2= NULL;
	while (*str1)
	{
		s1 = str1;
		s2 = str2;
		while(*s2&&*s1 == *s2)   //*s1和*s2相等时才继续++，但是要排除两者相等但都为'\0'的情况
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return str1;
		}
		str1++;
	}
	return NULL;
}
int main()
{
	char arr1[] = "qweraabct";
	char arr2[] = "";
	char* ret=my_strstr(arr1, arr2);
	if (ret)
	{
		printf("找到了 %s\n", ret);
	}
	else
		printf("没找到\n");
	return 0;
}
	