#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//��ʼ������Ϊȫ0
void intt(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}
//��ӡ�����ÿ��Ԫ��
void print(int arr[])
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//����Ԫ�ص�����
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
	printf("��������Ԫ��:\n");
	for(int i = 0 ; i < 10 ; i++)
	{
		scanf("%d", &arr[i]);
	}
	int sz =sizeof(arr) / sizeof(arr[0]) - 1;
	reverse(arr,sz);
	printf("����Ԫ�ص�����:\n");
	print(arr);
	intt(arr);
	printf("��ʼ������Ϊȫ0:\n");
	print(arr);
	return 0;
}