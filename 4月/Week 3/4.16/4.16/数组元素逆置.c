#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//初始化数组为全0
void intt(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}
//打印数组的每个元素
void print(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//数组元素的逆置
void reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz;
	int tmp = 0;
	while (left <= right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}

int main()
{
	int arr[10] = { 0 };
	printf("输入数组元素:\n");
	for(int i = 0 ; i < 10 ; i++)
	{
		scanf("%d", &arr[i]);
	}
	int sz =sizeof(arr) / sizeof(arr[0]) - 1;
	reverse(arr,sz);
	printf("数组元素的逆置:\n");
	print(arr);
	intt(arr);
	printf("初始化数组为全0:\n");
	print(arr);
	return 0;
}