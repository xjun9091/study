#pragma once

#include<stdio.h>
#include<time.h>

# define ROW 9  //ÐÐ
# define COL 9  //ÁÐ

# define ROWS ROW+2
# define COLS COL+2

# define EASY_COUNT 80

void InitBoard(char Board[ROWS][COLS], int rows, int cols, char n);
void printBoard(char Board[ROWS][COLS], int row, int col);
void SetMine(char Board[ROWS][COLS], int row, int col);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);