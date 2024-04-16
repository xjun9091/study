#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>//调用srand函数
#include<time.h>//调用time函数
void menu()
{
	//游戏菜单
	printf("****************************\n");
	printf("******* 1.游戏开始 *********\n");
	printf("******* 0.游戏结束 *********\n");
	printf("****************************\n");
}
void game()
{
	//游戏的逻辑
	//将随机数控制在1~100
	int r = rand() % 100 + 1;
	while(1)
	{
		int guess = 0;
		printf("请猜数字:");
		scanf("%d", &guess);
		if (guess < r)
		{
			printf("猜小了\n");
		}
		else if (guess > r)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对啦\n");
			break;
		}
	}
}
int main()
{
	//1.生成随机数
	srand((unsigned int)time(NULL));
	int i= 0;
	do 
	{
		menu();//打印菜单
		printf("请选择:");
		scanf("%d", &i);
		switch(i)
		{		
			case 1:
				printf("游戏开始\n");
				game();
				break;
			case 0:
				printf("游戏结束\n");
				break;
			default:				
				printf("输入错误重新输入\n");
				break;				
		}
	} while (i);
	return 0;
}