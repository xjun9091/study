#define _CRT_SECURE_NO_WARNINGS 
//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222

#include <stdio.h>
#include<math.h>

int cnm(int x,int y)
{
	int temp = 0;	
	int sum = 0;
	for (int i = 0; i < y; i++)
	{	
		temp += x * pow(10,i);
		sum += temp;
	}
	return sum;
}
int main()
{
	int a,b;//�������������㵽�ڼ���
	printf("��͵�����\n");
	scanf("%d", &a);
	printf("��ǰ�����\n");
	scanf("%d", &b);
	int Sn = cnm(a,b);
	printf("Sn��ǰ%d���Ϊ%d\n",b,Sn);
	return 0;
}

