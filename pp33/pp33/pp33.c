#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("*****************************\n");
	printf("********** 1.play ***********\n");
	printf("********** 0.exit ***********\n");
	printf("*****************************\n");
}
void game()
{
	char ret = 0;
	printf("开始游戏\n");
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitBoard( board, ROW, COL );
	//打印棋盘
	Display(board, ROW, COL);
	while (1)
	{
		Player(board, ROW, COL);
			Display(board, ROW, COL);
		ret=Judge(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Computer(board, ROW, COL);
		Display(board, ROW, COL);
		ret=Judge(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("游戏结束，玩家赢\n");
	else if (ret == '#')
		printf("游戏结束，电脑赢\n");
	else if (ret == 'Q')
		printf("游戏结束，平局\n");
}
void test()
{
	int i = 0;
	do
	{
		menu();
		printf("请输入0或1来选择是否开始游戏\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏");
			break;
		default:
			printf("输入错误，请重新输入0或1\n");
			break;
		}
	} while (i); 
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	system("pause");
	return 0;  
}