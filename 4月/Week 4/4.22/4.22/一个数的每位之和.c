#define _CRT_SECURE_NO_WARNINGS 
//дһ���ݹ麯��DigitSum(n)�������������֮����һ���Ǹ����������غ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19
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
		printf("%d��ÿλ֮��%d\n",n, r);
	}
	return 0;
}