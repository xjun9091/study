#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	printf("arr1:\n");
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("arr2:\n");
	for (int j = 0; j < 10; j++)
	{
		scanf("%d", &arr2[j]);
	}
	printf("ÄÚÈÝ½»»»\n");
	int tmp = 0;
	for (int n = 0; n < 10; n++)
	{
		tmp = arr1[n];
		arr1[n] = arr2[n];
		arr2[n] = tmp;
	}
	printf("arr1:\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\narr2:\n");
	for (int j = 0; j < 10; j++)
	{
		printf("%d ", arr2[j]);
	}
	return 0;
}