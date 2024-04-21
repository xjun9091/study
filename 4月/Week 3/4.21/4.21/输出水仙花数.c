//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include<math.h>
//#include<stdbool.h>
//
////判断输入的是几位数
//int Digits(int a)
//{
//	int temp = 0;
//	while (a != 0)
//	{
//		a = a / 10;
//		temp++;
//	}
//	return temp;
//}
//
////计算
//int count (int x,int y)//x为水仙数，y为几位数
//{
//	int sum = 0;
//	int temp = 0;
//	while (x!=0)
//	{
//		temp = x % 10;
//		x = x / 10;
//		sum +=pow(temp,y);
//	}
//	return sum;
//}
//
////判断是否为水仙数
//bool judge (int x,int y)
//{
//	if (x == y)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int daffodil = 100;
//	while (daffodil < 100000) 
//	{
//		int n = Digits(daffodil);
//		int m = count(daffodil, n);
//		if (judge(daffodil, m))
//			printf("%d是水仙数\n", daffodil);
//		daffodil++;
//	}
//	return 0;
//}
