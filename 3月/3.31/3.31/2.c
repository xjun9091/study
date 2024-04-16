#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int a, b,c;
	a = 1;
	b = a++,++a;//从左到右，逗号隔开
	c = b = a++;//从右到左，等号赋值
	printf("a=%d ,b=%d,c=%d\n", a, b,c);
	return 0;
}