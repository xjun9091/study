#pragma once

#include<stdio.h>

# define ROW 9  //ÐÐ
# define COL 9  //ÁÐ

# define ROWS ROW+2
# define COLS COL+2


void InitBorad(char Borad[ROWS][COLS], int rows, int cols, char n);
void printBorad(char Borad[ROWS][COLS], int row, int col);