#define _CRT_SECURE_NO_WARNINGS 
//写一个递归函数DigitSum(n)，组成它的数字之输入一个非负整数，返回和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
#include<stdio.h>

int DigitSum(n)
{
	if (n < 9)
		return n;
	else
		return n % 10 + DigitSum(n/10);
}

int main()
{
	int n = 0;
	while(scanf("%d", &n)!=EOF)
	{
		int r = DigitSum(n);
		printf("%d的每位之和%d\n",n, r);
	}
	return 0;
}