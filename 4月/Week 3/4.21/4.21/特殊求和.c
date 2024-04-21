#define _CRT_SECURE_NO_WARNINGS 
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

#include <stdio.h>
#include<math.h>

int cnm(int x,int y)
{
	int temp = 0;	
	int sum = 0;
	for (int i = 0; i < y; i++)
	{	
		temp += x * pow(10,i);
		sum += temp;
	}
	return sum;
}
int main()
{
	int a,b;//输入的数，求和算到第几项
	printf("求和的数：\n");
	scanf("%d", &a);
	printf("求前多少项：\n");
	scanf("%d", &b);
	int Sn = cnm(a,b);
	printf("Sn的前%d项和为%d\n",b,Sn);
	return 0;
}

