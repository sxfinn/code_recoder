#include <stdio.h>
#include <string.h>

#define maxn 1000001
#define maxk 100001

int a[maxn];
int cnt[maxk]; 
                                        //与桶排序很相似
void CountingSort(int n, int *a) 
{                                       // (1)
    int i, top; 
    memset(cnt, 0, sizeof(cnt));         // (2) 初始化计数器
    for(i = 0; i < n; ++i)
    {             // (3)
        ++cnt[ a[i] ];                   // (4) 映射下标
    }
    top = 0;                             // (5)
    for(i = 0; i < maxk; ++i) 
    {
        while(cnt[i]) 
        {                  // (6)
            a[top++] = i;                // (7) 按照下标进行排序
            --cnt[i];                    // (8) 排一次计数器减一
        }
        if(top == n) 
        {                                  // (9)个数满了，break退出
            break;
        }
    }
} 
