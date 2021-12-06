#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>


double mui(int n,int k)
{
    if (k > 0)
        return n * mui(n, k - 1);
    else if (k < 0)
        return 1.0 / mui(n, -k);
    else
        return 1.0;
}
int main()
{
    int n = 2;
    int k = -3;
    double sum=mui(n,k);
    printf("%lf", sum);
    return 0;
}