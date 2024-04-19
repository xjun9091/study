#define _CRT_SECURE_NO_WARNINGS 

#include"game.h"
//运行菜单
void menu()
{
	printf("*************************\n");
	printf("*******  1.paly   *******\n");
	printf("*******  0.exit   *******\n");
	printf("*************************\n");
}
//游戏的实现
void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置的雷
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息
	//初始化棋盘
	InitBorad(mine, ROWS, COLS, '0');
	InitBorad(show, ROWS, COLS, '*');

	//打印棋盘
	/*printBorad(mine, ROW, COL);*/
	printBorad(show, ROW, COL);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入有误，重新输入\n");
			break;
		}
	} while (input);
		return 0;
}
