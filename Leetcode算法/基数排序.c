//进阶部分

#include <stdio.h>
#include <string.h>

const int MAXN = 100005;          // (1) 排序数组的元素最大个数
const int MAXT = 8;               // (2) 排序元素的数字的最大位数
const int BASE = 10;              // (3) 排序元素的进制，这里为十进制；
int PowOfBase[MAXT];              // (4) Powofbase[i]代表BASE的主次幂
int RadixBucket[BASE][MAXN];      // (5) Radixbucket[i]代表第i个队列
int RadixBucketTop[BASE];         // (6) Radixbuckettop[i]代表第i个队列的尾指针
            
void InitPowOfBase() 
{
    int i;
    PowOfBase[0] = 1;
    for(i = 1; i < MAXT; ++i) 
    {
        PowOfBase[i] = PowOfBase[i-1] * BASE;   // (7)初始化BASE的主次幂
    }
}

int getRadix(int value, int pos) 
{
    return value / PowOfBase[pos] % BASE;            // (8)计算 value 的pos位的值
}

void RadixSort(int n, int *a) 
{                                               // (9)void Radixsort(intn,int*a)为基数排序的实
                                                //现，代表对a[]数组进行升序排序
    int i, j, top = 0, pos = 0;
    while (pos < MAXT) 
    {                                           // (10)进行MAXT轮迭代；
        memset(RadixBucketTop, 0, sizeof(RadixBucketTop));  // (11)迭代前清空队列，只需要将队
                                                            //列尾指针置零即可
        for(i = 0; i < n; ++i) 
        {
            int rdx = getRadix(a[i], pos);
            RadixBucket[ rdx ][ RadixBucketTop[rdx]++ ] = a[i];// (12)入队操作
        }
        top = 0;
        for(i = 0; i < BASE; ++i) 
        {
            for(j = 0; j < RadixBucketTop[i]; ++j) 
            {
                a[top++] = RadixBucket[i][j];               // (13)将队列中的元素按顺序塞回原数组
            }
        }
        ++pos; 
    }
}

int a[MAXN];

int main() 
{
    int n;
    InitPowOfBase();
    while(scanf("%d", &n) != EOF) 
    {
        Input(n, a);
        RadixSort(n, a);
        Output(n, a);
    }
    return 0;
} 
/*
15
3221 1 10 9680 577 9420 7 5622 4793 2030 3138 82 2599 743 4127
*/
