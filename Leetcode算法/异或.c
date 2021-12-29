//异或
int insertBits(int N, int M, int i, int j)
{
    int p = 0;
    for (p = i; p <= j; p++)
    {
        unsigned int k = ((unsigned)1 << p);
        if ((N & k)!=0&&(M&1)==0||((N&k)==0&&(M & 1)!=0))
            N = N ^ k;      //k为某一位为1的数，异或操作可以使另一个数的那一位取反~                                 
        M >>= 1;            //原本位上为0的就变成1，为1的就变成0，其他位不变。                     
    }                       //可以代替 N=&~k 和 N=|k ,达到和他们相同的功能。
    return N;
}
//