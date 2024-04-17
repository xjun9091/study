#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 2 == 0) 
	{
		printf("2 ");
	}
	if (a % 3 == 0)
	{
		printf("3 ");
	}
	if (a % 7 == 0)
	{
		printf("7 ");
	}
	if((a % 2 != 0)&&(a % 3 != 0)&&(a % 7 != 0))
		printf("n");
	return 0;
}

//int main()
//{
//	int arr[3] = { 2,3,7 };
//	int a = 0;
//	int b = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < 3; i++)
//	{
//		if (a % arr[i] == 0)
//		{
//			printf("%d ", arr[i]);
//			b++;
//		}
//	}
//	if (b==0)
//		printf("n");
//	return 0;
//}