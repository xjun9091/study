//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include<math.h>
//#include<stdbool.h>
//
////�ж�������Ǽ�λ��
//int Digits(int a)
//{
//	int temp = 0;
//	while (a != 0)
//	{
//		a = a / 10;
//		temp++;
//	}
//	return temp;
//}
//
////����
//int count (int x,int y)//xΪˮ������yΪ��λ��
//{
//	int sum = 0;
//	int temp = 0;
//	while (x!=0)
//	{
//		temp = x % 10;
//		x = x / 10;
//		sum +=pow(temp,y);
//	}
//	return sum;
//}
//
////�ж��Ƿ�Ϊˮ����
//bool judge (int x,int y)
//{
//	if (x == y)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	int daffodil = 100;
//	while (daffodil < 100000) 
//	{
//		int n = Digits(daffodil);
//		int m = count(daffodil, n);
//		if (judge(daffodil, m))
//			printf("%d��ˮ����\n", daffodil);
//		daffodil++;
//	}
//	return 0;
//}
