#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//是否为2的幂次方
int main()
{
	int n = 0;
	scanf("%d", &n);	
		for (n; n >= 1;)
		{
			if (n % 2 == 0)
			{
				n = n / 2;
			}
			else
			{
				break;
			}
		}
		switch (n)
		{
		case 1:
			printf("是2的幂次方\n");
			break;
		default:
			printf("不是2的幂次方\n");
			break;
		}
	return 0;
}