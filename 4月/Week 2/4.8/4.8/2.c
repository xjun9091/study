//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>

//求1/1-1/2+1/3-1/4+...+1/99-1/100的和
// 第一种方法
//int main()
//{
//	double sum1 = 0;
//	double sum2 = 0;
//	double sum3 = 0;
//	for (double a = 1; a < 100; a += 2)
//	{
//		sum1 += 1 / a;
//	}
//	for (double b = 2; b <= 100; b += 2)
//	{
//		sum2 -= 1 / b;
//	}
//	sum3 = sum1 + sum2;
//	printf("%f", sum3);
//	return 0;
// }
 
 
 //第二种方法 
//int main()
//{
//	double n = 0;
//	double sum = 0;
//	int i = -1;
//	for (n = 1; n <=100; n++)
//	{
//		i = -i;
//		sum += i/n;
//	}
//	printf("%lf",sum);
//	return 0;
//}
