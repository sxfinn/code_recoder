//滑动窗口
//先设置一个长度为szp的窗口
// 判断第一个区间长度是否符合题意。
//接着让这个窗口移动，每次移动新增右边的一个元素，去掉最左边的一个元素。
//遍历结束即可。
int* findAnagrams(char* s, char* p, int* returnSize)
{
	*returnSize = 0;
	int hash1[26] = { 0 };
	int hash2[26] = { 0 };
	int szs = strlen(s);
	int szp = strlen(p);
	int  i = 0;
	int* ret = (int*)malloc(sizeof(int) * szs);
	for (i = 0; i < szp; i++)
	{
		hash1[s[i] - 'a']++;
		hash2[p[i] - 'a']++;
	}
	int j = 0;
	for (j = 0; j < 26; j++)
	{
		if (hash1[j] != hash2[j])
			break;
	}
	if (j == 26)
		ret[(*returnSize)++] = 0;
	for (i = szp; i < szs; i++)
	{
		hash1[s[i] - 'a']++;
		hash1[s[i - szp] - 'a']--;
		for (j = 0; j < 26; j++)
		{
			if (hash1[j] != hash2[j])
				break;
		}
		if (j == 26)
			ret[(*returnSize)++] = i - szp + 1;
	}
	return ret;
}
