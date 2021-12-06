int* findErrorNums(int* nums, int numsSize, int* returnSize) {
    int* errorNums = malloc(sizeof(int) * 2);
    int xorSum = 0;
    for (int i = 1; i <= numsSize; i++) {
        xorSum ^= i;
        xorSum ^= nums[i - 1];
    }
    int lowbit = xorSum & (-xorSum);    //得到二进制位中从低位开始第一个不相同的位为1时的值
    int num1 = 0, num2 = 0;             //也就是得到一个数，该数只有一位为1，且该位为两个数的二进制
                                        //序列第一个不相同的位。
    for (int i = 0; i < numsSize; i++) {
        if ((nums[i] & lowbit) == 0) {
            num1 ^= nums[i];
        } else {
            num2 ^= nums[i];
        }
    }
    for (int i = 1; i <= numsSize; i++) {
        if ((i & lowbit) == 0) {
            num1 ^= i;
        } else {
            num2 ^= i;
        }
    }
    int* ret = malloc(sizeof(int) * 2);
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == num1) {
            ret[0] = num1, ret[1] = num2;
            return ret;
        }
    }
    ret[0] = num2, ret[1] = num1;
    return ret;
}

//我自己写的：利用 & 运算符找到他们二进制的差异 从而分为两组
int* findErrorNums(int* nums, int numsSize, int* returnSize) 
{
	int* ret = (int*)malloc(sizeof(int) * 2);
	int i = 0;
	int xorSum = 0;
	for (i = 1; i <= numsSize; i++)
	{
		xorSum ^= i;
		xorSum ^= nums[i - 1];
	}
	int tmp = xorSum & (xorSum - 1);
	int lowbit = xorSum - tmp;
	int num1 = 0, num2 = 0;
	for (i = 1; i <= numsSize; i++)
	{
		if ((i & lowbit) == 0)
		    num1 ^= i;
		else
		    num2 ^= i;
		if ((nums[i - 1] & lowbit) == 0)
		    num1 ^= nums[i - 1];
		else
		    num2 ^= nums[i - 1];
    }	
    *returnSize = 2;
	for (i = 0; i < numsSize; i++)
	{
		if (nums[i] == num1)
		{
			ret[0] = num1;
			ret[1] = num2;
			return ret;
		}
	}
	ret[0] = num2;
	ret[1] = num1;
	return ret;
}