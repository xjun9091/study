//#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
//求100~到200之间的所有素数
int main()
{
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int n = 0;
		int flag = 1;//判断是素数
		for (n = 2; n <= i - 1; n++)
		{
			if (i % n == 0)//能被其他数除尽
			{
				flag = 0;//给flag赋0，表示假，不是素数
				break;
			}
		}
			if(flag == 1)
				printf("%d ", i);
	}
	return 0;
}

//对switch函数的简单运用

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


//当b>=20时，a=？

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