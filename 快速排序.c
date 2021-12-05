void Swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int Partition(int a[], int l, int r)
{
    int i, j, pivox; 
    int idx = l + rand() % (r - l + 1);        // (1) 随机选择一个基准
    pivox = a[idx];                            // (2) PIVOX代表基准值
    Swap(&a[l], &a[idx]);                      // (3)将基准和最左边的值交换；
    i = j = l + 1;                             // (4)i和j是两个同步指针，都从l+1开始；j-1以后的数都是大于等于基准值的；
                                               // 
    while( i <= r ) 
    {                                           // (5)开始遍历整个排序区间，i一定比j走的快，当i到达最右边的位置时，遍历结束；
        if(a[i] < pivox) 
        {                                       // (6)如果比基准值小的，交換a[i]和a[j],并且自増j
            Swap(&a[i], &a[j]);                
            ++j;                               
        }
        ++i;                                   // (7)每次遍历i都需要自増
    }
    Swap(&a[l], &a[j-1]);                      // (8)第j个元素以后都是不比基准值小的元素
    return j-1;
}

//递归进行划分
void QuickSort(int a[], int l, int r)
{
    if(l < r)
    {
        int mid = Partition(a, l, r);
        QuickSort(a, l, mid-1);
        QuickSort(a, mid+1, r);
    }
}

int* sortArray(int* nums, int numsSize, int* returnSize)
{
    QuickSort(nums, 0, numsSize-1);
    *returnSize = numsSize;
    return nums;
}
