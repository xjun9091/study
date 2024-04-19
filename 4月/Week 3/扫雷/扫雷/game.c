#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"

void InitBorad(char Borad[ROWS][COLS], int rows, int cols,char n)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			Borad[i][j] = n;
		}
	}

}

void printBorad(char Borad[ROWS][COLS], int row, int col)
{
	for (int j = 0; j <=col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (int i = 0; i < row; i++)
	{
		printf("%d ",i+1);
		for (int j = 0; j < col; j++)
		{
			printf("%c ",Borad[i][j]);		
		}
		printf("\n");
	}
}