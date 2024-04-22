#define _CRT_SECURE_NO_WARNINGS 
//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//#include<stdio.h>

//递归
//int Fact(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n * Fact(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int r = Fact(n);
//		printf("%d的阶乘是%d\n", n, r);
//	}
//	return 0;
//}


//非递归

//int Fact(int n)
//{
//	int a = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		a *= i;
//	}
//	return a;
//}
//
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		int r = Fact(n);
//		printf("%d的阶乘是%d\n", n, r);
//	}
//	return 0;
//}

