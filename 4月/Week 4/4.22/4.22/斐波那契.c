#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//递归方法
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	while(scanf("%d", &n)!=EOF)
//	{
//		int r = Fib(n);
//		printf("第%d项斐波那契数为%d\n", n, r);
//	}
//	return 0;
//}

//非递归方法

//int Fib(int n)
//{
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	if (n <= 2)
//		return 1;
//	else 		
//		for (i = 0; i < n-2; i++)
//	{
//			c = a + b;
//			a = b;
//			b = c;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	while(scanf("%d", &n)!=EOF)
//	{
//		int r = Fib(n);
//		printf("第%d项斐波那契数为%d\n", n, r);
//	}
//	return 0;
//}