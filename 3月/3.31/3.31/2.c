#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	int a, b,c;
	a = 1;
	b = a++,++a;//�����ң����Ÿ���
	c = b = a++;//���ҵ��󣬵ȺŸ�ֵ
	printf("a=%d ,b=%d,c=%d\n", a, b,c);
	return 0;
}