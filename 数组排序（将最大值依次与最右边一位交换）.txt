#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
void paixu(int arr[], int sz)
{
    int i = 0;
    
    int right = sz - 1;
    for (right = sz - 1; right > 0; right--)
    {
        int maxid = 0;
        for (i = 0; i < right + 1; i++)
        {
            if (arr[i] > arr[maxid])
            {
                maxid = i;
            }
        }
        int tmp = arr[maxid];
        arr[maxid] = arr[right];
        arr[right] = tmp;
    }
}
int main()
{
    int i = 0;
    int a[] = {99, 5,3,2,8,7,45,67, };
    int sz = sizeof(a) / sizeof(a[0]);
    paixu(a, sz);
    for (i = 0; i < sz; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}