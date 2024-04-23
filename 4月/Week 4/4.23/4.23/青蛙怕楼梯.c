#define _CRT_SECURE_NO_WARNINGS 
//已知有n阶楼梯，小青蛙一次可跳1阶或2阶楼梯
//问小青蛙要爬到楼顶，总共有多少种跳法
//斐波那契数列
#include <stdio.h>

int meth(int n)
{
	int step = 0;
	if (n == 1)
		return 1;
	else 

}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int m = meth(n);
	printf("小青蛙上%d层台阶有点%d种方法\n", n, m);
	return 0;
}