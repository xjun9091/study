//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdio.h>


// 错误方法
//int main()
//{
//	int a = 0;
//	int max = 0;
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%d", &a);
//	}
//	max = a;
//	for ( i = 1; i <= 10; i++)
//	{
//		if (max <= a)
//		{
//			max = a;
//		}
//	}
//	printf("最大整数为%d\n", max);
//	return 0;
//}

//输出10个数中的最大数
//正确方法
//int main()
//{
//	int arr[10];
//	int max = 0;
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		scanf("%d", &arr[i]);//循环输入十个数
//	}
//	max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (max <= arr[i])//比较
//		{
//			max = arr[i];//将最大数赋值给max
//		}
//	}
//	printf("最大整数为%d\n", max);
//	system("pause");
//	return 0;
//}