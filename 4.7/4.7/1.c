//#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//��100~��200֮�����������
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int n = 0;
		int flag = 1;//�ж�������
		for (n = 2; n <= i - 1; n++)
		{
			if (i % n == 0)//�ܱ�����������
			{
				flag = 0;//��flag��0����ʾ�٣���������
				break;
			}
		}
			if(flag == 1)
				printf("%d ", i);
	}
	return 0;
}

//��switch�����ļ�����

//#include <stdio.h>
//int main() {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) 
//	{
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//��b>=20ʱ��a=��

//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}