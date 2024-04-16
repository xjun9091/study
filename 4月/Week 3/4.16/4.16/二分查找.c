//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//
//void set_arr(int n, int arr[])
//{
//	printf("输入元素个数:");
//	scanf("%d", &n);
//	printf("输入数组元素:\n");
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//int main()
//{
//	int arr[5] = { 0 };
//	int n = 0;
//	set_arr(n, arr);
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int input = 0;
//	int find = 0;
//	int mid = 0;
//	printf("要查找下标的元素:");
//	scanf("%d", &input);
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (input < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (input > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			find = 1;
//			break;
//		}
//	}
//		if (find == 1)		
//			printf("%d的下标为%d\n", input, mid);		
//		else
//			printf("找不到\n"); 
//	return 0;
//}