#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ret;
		}
	}
}
void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
		printf("%d ", i);
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}printf("\n");
}
void Set(char board[ROWS][COLS], int row, int col)
{
	int count = Easy;
	while (count)
	{
		int x = rand() % row+1 ;
		int y = rand() % col+1 ;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int GetCount(char board[ROWS][COLS], int x, int y)
{
	return board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1] + board[x][y - 1] + board[x][y + 1]
		+ board[x + 1][y - 1] + board[x + 1][y] + board[x + 1][y + 1]-8*'0';
}
int Dig(char board[ROWS][COLS], int x, int y)
{

}
void Find(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int i = 0;
	while (win<row*col - Easy)
	{
		printf("请输入坐标:<");
		scanf("%d %d", &x, &y);
		i++;
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				if (i < 2)
					printf("此处有雷,");//第一次下子，不结束游戏
				if (i >= 2)
				{
					printf("很遗憾，游戏结束\n");
					Display(mine, ROW, COL);
					break;
				}
			}
			else
			{
				int count = GetCount(mine,x,y);
				show[x][y] = count+'0';
				Display(show, ROW, COL);
				win++;
			}
		}
		else
			printf("请重新输入坐标:<");
	} 
	if (win == row*col - Easy)
	{
		printf("游戏胜利\n");
		Display(mine, ROW, COL);
	}
}