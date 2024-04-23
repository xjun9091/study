#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"
//初始化棋盘
void InitBoard(char Board[ROWS][COLS], int rows, int cols,char n)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Board[i][j] = n;
		}
	}
}

//打印棋盘
void printBoard(char Board[ROWS][COLS], int row, int col)
{
	for (int j = 0; j <=col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ",i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ",Board[i][j]);		
		}
		printf("\n");
	}
}

//布置雷
void SetMine(char Board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	int x = 0;
	int y = 0;
	while(count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (Board[x][y] != '1')
		{
			Board[x][y] = '1';
			count--;
		}
	}
}


//统计被排查点周围的雷
int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int count = 0;
	for (int i = -1; i <=1 ; i++)
	{
		for (int j = -1; j <= 1; j++)
		{
			count += mine[x + i][y + j] - '0';
		}
	}
	return count;
}


//排查雷
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x,y;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')//是雷
			{
				printf("抱歉，你被炸死了\n");
				printBoard(mine, ROW, COL);
				break;
			}
			else//不是雷
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				printBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("输入的x，y不在1~9的范围内，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		printBoard(mine, ROW, COL);
	}
}