#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int n;
	for ( n = 34567; n != 0; n = n / 10)//n!=0,意思是，n不等于0
		printf("%d",n%10);//整数才可取模，所以上一步n/10只取整数部分
	printf("\n");
	return 0;
}