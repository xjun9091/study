#define _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>


void shut()
{
	system("color 0c");
	printf("哈哈，没机会喽！原神启动 ！");
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{		
		printf("请注意，你的电脑将在60秒后关机，如果输入：我是猪，就取消关机！\n");
		printf("请输入：");
		scanf(" %s", input);
		if (strcmp("我是猪", input) == 0)
		{
			system("shutdown -a");
			break;
		}
	}
}

void menu()
{
	system("color 0e");
	Sleep(500);
	printf("\n");
	printf("             游戏规则：电脑会自动生成一个数，猜一猜这个数是多少\n");
	printf("                 你只有5次机会，机会用完，游戏结束。    \n");
	printf("              ***************************************************\n");
	printf("         温情提示，机会用完，您的电动自动启动关机程序，电脑会在7秒后关机\n");
	printf("\n");
	printf("     在最后“请输入： ”处输入”我是猪“，可以取消自动关机（这是游戏输了的惩罚，别怪我）\n");
	printf("\n");
	printf("              哈哈，要玩就玩刺激的，我真的太坏了，但我是真的喜欢\n");
	printf("\n");
	printf("                     准备好了吗，游戏开始吧，我的小可爱！\n");


	printf("\n");
	printf("                * 按 1 再按回车开始游戏 ， 按 0 再按回车退出游戏 * \n");
	printf("\n");
	printf("              ******************   1.玩游戏  ********************\n");
	printf("              ******************    0.退出    *******************\n");
	printf("              ***************************************************\n");
	printf("              ***************************************************\n");
	printf("\n");
	system("color 0d");

}

void game()
{
	int r = rand() % 100 + 1;
	int guess = 0; int count = 5;
	system("color 0d");
	while (count != 0)
	{
		printf("请输入一个整数再按下回车：\n");
		printf("\n");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
			printf("\n");
			system("color 0e");

			count--;
			if (count == 0)
			{
				shut;
			}
			else
			{
				printf("游戏继续\n");
			}
			printf("请注意！还有%d机会\n", count);
			printf("\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
			system("color 0a");

			count--;
			if (count == 0)
			{
				shut;
			}
			else
			{
				printf("游戏继续\n");
			}

			printf("请注意！还有%d次机会\n", count);
			printf("\n");
		}
		else if (guess = r)
		{
			count--;
			printf("牛马，运气好让你猜对了！敢不敢再玩一次，再玩一次有惊喜！\n");
			printf("\n");

			break;
		}

	}
}

//void color()
//{
//	
//	while (1)
//	{
//		system("color 0d");
//		Sleep(1200);
//		system("color 0e");
//		Sleep(1200);
//		system("color 0f");
//
//	}
//}


int main()
{

	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{

		menu();
		/*color();*/
		printf("请选择：");
		system("color 0b");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			printf("\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			printf("\n");
			break;
		}

	} while (input);

	return 0;
}
