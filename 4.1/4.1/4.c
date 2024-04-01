#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int a;
	for (a = 0; a <= 100; a++)
	{
		if (a % 3 == 0)
			printf(" %d", a);
	}
	return 0;
}