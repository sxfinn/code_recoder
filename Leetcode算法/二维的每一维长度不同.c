
给你一个整数数组 nums ，数组中的元素 互不相同 。返回该数组所有可能的子集（幂集）。

解集 不能 包含重复的子集。你可以按 任意顺序 返回解集。

 技巧：使用二进制位每一位的的1 ， 0，来表示数组对应下标位的元素是否在子集存在。
假如有 n 个数 ，则有2^n个子集，而要对应上每一个子集出现的内容，那么枚举的数必须是从0到2^n次方-1，才
能罗列出所有子集的可能。

数组的元素构成子集只有两种可能，每一个元素 被包括 或者 不被包括，
而二进制每一位也是两种可能，为1 或者 为0,那么枚举完 1 和 0 的每一种情况，也就意味着
枚举完了 子集的所有情况

精华：每一个二进制位对应一个元素，枚举出每个元素的出现情况 ，即出现或不出现，就枚举完成咯。
题目一：求每一个子集
int** subsets(int* nums, int numsSize, int* returnSize, int** returnColumnSizes)
{
    int** ret = (int**)malloc(sizeof(int*) * (1 << numsSize));
    *returnColumnSizes = (int*)malloc(sizeof(int) * (1 << numsSize));
    *returnSize = 1 << numsSize;
    for (int i = 0; i < (1 << numsSize); i++)
        ret[i] = (int*)malloc(sizeof(int) * numsSize);        
    memset(*returnColumnSizes, 0, sizeof(int) * (1<<numsSize));
    for (int i = 0; i < (1 << numsSize); i++)
    {
        for (int j = 0; j < numsSize; j++)
        {
            if (i & (1 << j))
                ret[i][(*returnColumnSizes)[i]++] = nums[j];                          
        }
    }
    return ret;
}
题目二：求含有k个数的子集
//利用组合数公式求子集的个数
int factor(int n)
{
    int ans = 1;
    while (n)
    {
        ans *= n;
        n--;
    }
    return ans;
}
int onenum(int n)//求所对应的二进制序列 1 的个数，也是子集元素的个数，如果等于k说明满足要求。
{
    int cnt = 0;
    while (n)
    {
        n &= (n - 1);
        cnt++;
    }
    return cnt;
}
int** combine(int n, int k, int* returnSize, int** returnColumnSizes)
{
    int num = factor(n) / factor(k) / factor(n - k);//求子集个数
    int** ret = malloc(sizeof(int*) * num);         //申请空间
    *returnSize = num;                              
    *returnColumnSizes = (int*)malloc(sizeof(int) * num);
    for (int i = 0; i < num; i++)
    {
        ret[i] = (int*)malloc(sizeof(int) * k);     //为每一种子集申请内存空间
        //(*returnColumnSizes)[i] = 0;
    }
    memset(*returnColumnSizes, 0, sizeof(int) * num); //由于数组内还没放入元素，初始化所有子集长度为0
    int p = 0;
    for (int i = 0; i < (1<<n); i++)        //枚举所有子集可能的情况
    {
        if (onenum(i) == k)         //如果该子集的元素个数为k
        {
            for (int j = 0; j < n; j++)//每个数对应一个二进制位
            {
                if (i & (1 << j))   //第j位为1，二进制中的 1 对应的数就是要放进子集的元素
                {
                    //那么对应的位就放入子集
                    ret[p][(*returnColumnSizes)[p]++] = j + 1;
                }
            }
            p++;h//换行，（枚举另一个子集）
        }
    }
    return ret;
}
//结束后，由于我们枚举的i有 i的n次方种情况，可以包括子集的每一种情况，我们将每一个二进制位和一个数
//一一对应，1表示在子集，0表示不在子集，我们按照二进制的每一种情况分别 将不同子集放入数组，就结束啦，