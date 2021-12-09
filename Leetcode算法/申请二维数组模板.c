
int **myMalloc(int r, int c, int* returnSize, int** returnColumnSizes) 
{
    int i;
    int **ret = (int **)malloc( sizeof(int *) * r );        // (1)给二级指针申请一块内存，指向r个int*指针
    *returnColumnSizes = (int *)malloc( sizeof(int) * r );  // (2)给需要返回的数组申请空间
    *returnSize = r;                                        // (3)返回的二维数组的行数
    for(i = 0; i < r; ++i) 
    {
        ret[i] = (int *)malloc( sizeof(int) * c );          // (4)给每一个int*申请一块长度为c的空间
        (*returnColumnSizes)[i] = c;                        // (5)每行的列数为c
    }    
    return ret;
}
// 对于 returncolumnsizes这个参数，补充几点
// 1)它是一个指向数组的指针，这里数组是行数组；
// 2)* returncolumnsizes是实际的那个数组，并且数组的每个元素是(* returncolumnsizes)[i]，代表的是列数；
// 3) return是个前缀，代表它的定位是返回值，而不是函数传参
