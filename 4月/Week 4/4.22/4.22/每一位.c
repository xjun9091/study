#define _CRT_SECURE_NO_WARNINGS 
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
#include<stdio.h>

void print(int x)
{
	if (x > 9)
		print(x / 10);
		printf("%d ", x % 10);
}

int main()
{
	int n = 0;
	while (scanf("%d", &n) != EOF)
	{
		print(n);
	}
	return 0;
}