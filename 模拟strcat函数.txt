char* my_strcat(char* a, char* b)
{ 
	char* ret = a;
	assert(a && b);
	while (*a)
	{
		a++;
	}
	while (*a++ = *b++);
	return ret;
}

int main()
{
	
	char d[100] = "hellow \0***";
	my_strcat(d,"sb");
	printf("%s", d);
	return 0;
}