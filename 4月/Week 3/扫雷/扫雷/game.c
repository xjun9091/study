#define _CRT_SECURE_NO_WARNINGS 
#include"game.h"
//��ʼ������
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

//��ӡ����
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

//������
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


//ͳ�Ʊ��Ų����Χ����
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


//�Ų���
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x,y;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("������Ҫ�Ų������:");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')//����
			{
				printf("��Ǹ���㱻ը����\n");
				printBoard(mine, ROW, COL);
				break;
			}
			else//������
			{
				int count = GetMineCount(mine, x, y);
				show[x][y] = count + '0';
				printBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("�����x��y����1~9�ķ�Χ�ڣ�����������\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		printBoard(mine, ROW, COL);
	}
}