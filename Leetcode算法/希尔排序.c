#include <stdio.h>
#include <malloc.h>
#define maxn 1000001

int a[maxn];

void ShellSort(int n, int a[])
{
    int i, j, tmp, gap;
    for(gap = n / 2; gap > 0; gap /= 2) 
    {                                       // (1)   (1)每隔gap个数作为一组，gap=n/2,n/4,n/8,…,1
        for(i = gap; i < n; ++i) 
        {                                   // (2)   (2)从第gap个数开始遍历；
            tmp = a[i];
            for(j = i; j >= gap; j -= gap) 
            {                               // (3)   (3)-(5)找到一个需要插入的位置，并且跳出循环
                if(tmp < a[j - gap]) //降序只用该这里！！
                {                           // (4)    
                    a[j] = a[j - gap];
                }
                else 
                {
                    break;                     // (5)  
                }
            }
            a[j] = tmp;                        // (6)  (6)第j个位置就是这个数需要插入的位置
        }
    }
}

