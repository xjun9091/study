﻿#define _CRT_SECURE_NO_WARNINGS 

//编写代码实现：求⼀个整数存储在内存中的⼆进制中1的个数。

//此想法只对正整数有用
//因为存贮为补码，负数补码一堆1

#include <stdio.h>
#include<math.h>
int main()
{
	int n = 0;
	int b = 0;
	int count = 0;
	scanf("%d", &n);
	for (int i = 0; i < 32; i++)
	{
		b = pow(2, i);
		if ((n & b) == b)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}