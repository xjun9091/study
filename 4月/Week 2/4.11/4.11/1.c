#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//�Ƿ�Ϊ2���ݴη�
int main()
{
	int n = 0;
	scanf("%d", &n);	
		for (n; n >= 1;)
		{
			if (n % 2 == 0)
			{
				n = n / 2;
			}
			else
			{
				break;
			}
		}
		switch (n)
		{
		case 1:
			printf("��2���ݴη�\n");
			break;
		default:
			printf("����2���ݴη�\n");
			break;
		}
	return 0;
}