#define  _CRT_SECURE_NO_WARNINGS
#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>


#include <time.h>
void InitBoard(char board[ROW][COL], int row, int col);
void Dispalay(char board[ROW][COL], int row, int col);
void Player(char board[ROW][COL], int row, int col);
void Computer(char board[ROW][COL], int row, int col);
char Judge(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);