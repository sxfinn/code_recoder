#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>


void reverse_arr(char* p)
{
    char tmp = *p;
    int len=strlen(p);
    *p = *(p + len - 1);
    *(p + len - 1) = '\0';
        if (strlen(p + 1) > 1)
        {
            reverse_arr(p + 1);

        }
        *(p + len - 1) = tmp;

}

int main()
{
    char a[] = "abcde";
    reverse_arr(a);
    printf("%s",a);
    return 0;
}