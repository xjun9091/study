#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int a, b, c;
	a = 5;
	c = ++a;//c=6,a=6
	b = ++c, c++, ++a, a++;// a=8,c=8,b=7
	b += a++ + c;//b = b + a++ + c// a=9,c=8,b=23
	printf("a = %d b = %d c = %d\n:", a, b, c);
	return 0;
}