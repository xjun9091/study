#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	int s = 1;
	int i = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		s *= i;
	}
	printf("%d!=%d",n, s);
	return 0;
}