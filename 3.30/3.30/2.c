#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum=a+b;
	scanf ("%d %d",&a ,&b);//scanf_s可以运行没有警告
	printf("sum=%d\n", sum=a+b);
	return 0;
}