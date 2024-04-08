#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main ()
{
	int a = 0;
	int b = 0;
	for (a = 1; a <= 100; a++)
	{
		if (a % 10 == 9 && a / 10 == 9)
		{
			b += 2;
			continue;
		}
			if (a % 10 == 9 || a / 10 == 9)
				b++;
	}
	printf("%d", b);
	return 0;
}