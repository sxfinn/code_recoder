#include<stdio.h>
//比较
int mystrncmp(const char* s1, const char* s2, int n)
{
	while (n-- && (*s1 == *s2) && *s1)
		s1++, s2++;
	if (n != -1)
		return *s1 - *s2;
	return 0;
}
//追加
char* mystrncat(char* s1, const char* s2, int n)
{
	char* ret = s1;
	while (*s1)
		s1++;
	while (n-- && (*s1++ = *s2++));
	if (n == -1)
		*s1 = '\0';
	return ret;
}
//拷贝
char* my_strncpy(char* s1, const char* s2, int cnt)
{
	char* ret = s1;
	while (cnt-- && (*s1++ = *s2++));
	while (cnt--)
		*s1++ = '\0';
	return ret;
}
//模拟strstr查找函数（滑动窗口）
char* my_strstr(char* s1, char* s2)
{
	int sz1 = strlen(s1);
	int sz2 = strlen(s2);
	for (int i = 0; i <= sz1 - sz2; i++)
	{
		int j = 0;
		for (j = 0; j < sz2; j++)
		{
			if (s1[i + j] != s2[j])
				break;
		}
		if (j == sz2)
			return s1 + i;
	}
	return NULL;
}