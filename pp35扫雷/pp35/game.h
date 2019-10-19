#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define Easy 10

void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret);
void Display(char board[ROWS][COLS], int row, int col);
void Set(char board[ROWS][COLS], int row, int col);
void Find(char mine[ROWS][COLS], char[ROWS][COLS], int row, int col);