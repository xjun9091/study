#define _CRT_SECURE_NO_WARNINGS 

//ĳ��������3�η�����λ����4�η�����λ���������η����Ĵη��ñ���0~9����

#include <stdio.h>
int main()
{
	int age = 10;//10~21
	int arr[10] = { 0 };
	int n = 0;
	int m = 0;
	
	while (age < 21)
	{
		for (int i = 0; i < 10; i++)
		{
			arr[i] = 0;
		}
		n = age * age * age;
		for (; n> 0;)
		{
			arr[n % 10] = 1;
			n = n / 10;
		}
		m = age * age * age * age;
		for (;m>0;)
		{
			arr[m % 10] = 1;
			m = m / 10;
		}
		int found = 1;
		for (int i = 0; i < 10; i++)
		{
			if (arr[i] == 0)
			{
				found = 0;
				break;
			}
			if(found = 1)
			{
				 break; 
			}
		}
		age++;
	}
	printf("���˵�������%d\n", age);
	return 0;
}
