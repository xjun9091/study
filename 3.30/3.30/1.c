//#define _CRT_SECURE_NO_WARNINGS 
//
#include <stdio.h>
int main()
{
	printf("%c\n",77);//m
	printf("%c\n", 98);//b
	return 0;
}
int main()
{
	int i = 0;
	for (i = 32; i <= 127; i++)
	{
		printf("%c", i);
		if (i % 16 == 15)
			printf("\n");
	}
	return 0;
}