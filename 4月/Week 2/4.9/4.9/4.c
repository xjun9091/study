#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = (a < b ? a : b);
//	for (i; i>0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("最大公约数为%d\n", i);
//			break;
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
	 //如果a=18，b=24
	    
	 //第一次：a = 18  b = 24  c = a % b = 18 % 24 = 18
		//循环中：a = 24   b = 18		
		//第一步相当于比大小，大值赋给a，小值赋给b
		
	//第二次：a = 24   b = 18  c = a % b = 24 % 18 = 6
		//循环中：a = 18   b = 6
		//循环除余数，直到能除尽，剩下那个数就是最大公约数
	
	//第三次：a = 18   b = 6   c = a % b = 18 % 6 = 0
		//循环结束

//	while (c = a % b)
//	{
//		a = b;
//		b = c;
//	}
//
//	printf("%d\n", b);
//	return 0;
//}