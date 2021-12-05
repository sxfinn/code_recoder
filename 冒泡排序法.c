#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
void paixu(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz-1; i++)  //sz个数需要将sz-1个数移动到正确位置才完成排序
    {
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)//依次比较，交换，就可以将一个最大的数移动到最右边
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

}
int main()
{
    int i = 0;
    int a[] = { 8,3,4,5,9,2 };
    int sz = sizeof(a) / sizeof(a[0]);
    paixu(a, sz);
    for (i = 0; i < sz; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}