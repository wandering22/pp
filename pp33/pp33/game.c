#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j <col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void Display(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ�����������
		//printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
		//if (i < 2)
		//	printf("---|---|---\n");
		//��ӡ�����Զ���n��n�е�����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");

		}
		printf("\n");
		if (i < row - 1)
		for (j = 0; j < row; j++)
		{
			printf("---");
			if (j < row - 1)
				printf("|");

		}
		printf("\n");
	}
}
void Player(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����:<\n");
	
	while (1)
	{
		printf("������Ҫ�ߵ�����:");
		scanf("%d %d", &x, &y);
		if (x >= 1&& x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] = ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
				printf("�����ѱ�ռ�ã�����������\n");
		}
		else
			printf("������������������\n");
	}
}
void Computer(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("������:\n");
	x = rand()%row;
	y = rand() % col;
	while (1)
	{
			if (board[x][y] = ' ')
			{
				board[x][y] = '#';
				break;
			}
	}
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return i;
}
char Judge(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int ret = 0;
	//���Ի������Ӯ
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	if (board[0][0] == board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[0][2] == board[1][1] == board[2][0] && board[0][i] != ' ')
		return board[0][2];
	//ƽ��
	if(ret = IsFull(board, ROW, COL)==1);
	return 'Q';
		return 'C';
}
