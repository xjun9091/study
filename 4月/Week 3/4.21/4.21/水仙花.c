#define _CRT_SECURE_NO_WARNINGS 
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
// 如:153＝1^3＋5^3＋3^3，则153是一个“水仙花数”

#include <stdio.h>
#include<math.h>
#include<stdbool.h>

//判断输入的是几位数
int Digits(int a)
{
	int temp = 0;
	while (a != 0)
	{
		a = a / 10;
		temp++;
	}
	return temp;
}

//计算
int count (int x,int y)//x为水仙数，y为几位数
{
	int sum = 0;
	int temp = 0;
	while (x!=0)
	{
		temp = x % 10;
		x = x / 10;
		sum +=pow(temp,y);
	}
	return sum;
}

//判断是否为水仙数
bool judge (int x,int y)
{
	if (x == y)
		return true;
	else
		return false;
}
int main()
{
	int daffodil = 0;
	while (scanf("%d", &daffodil)!=EOF)
	{
		int n = Digits(daffodil);
		int m = count(daffodil, n);
		if (judge(daffodil, m))
			printf("%d是水仙数\n", daffodil);
		else
			printf("%d不是水仙数\n", daffodil);
	}
	return 0;
}