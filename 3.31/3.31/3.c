#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int n;
	for ( n = 34567; n != 0; n = n / 10)//n!=0,��˼�ǣ�n������0
		printf("%d",n%10);//�����ſ�ȡģ��������һ��n/10ֻȡ��������
	printf("\n");
	return 0;
}