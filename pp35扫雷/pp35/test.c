#define  _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("******************************\n");
	printf("***********1.play*************\n");
	printf("***********0.exit*************\n");
	printf("******************************\n");
}
void game()
{
	char mine[ROWS][COLS] = { 0 };//雷
	char show[ROWS][COLS] = { 0 };//个数
	InitBoard(mine, ROWS, COLS, '0');//初始化
	InitBoard(show, ROWS, COLS, '*');
	//Display(mine, ROW, COL);//打印棋盘
	Display(show, ROW, COL);
	//布置雷
	Set(mine, ROW, COL);
	Display(mine, ROW, COL);
	//排查雷
	Find(mine, show, ROW, COL);
}
void test()
{
	int i = 0;
	do
	{
		menu();
		printf("请输入0或1来选择是否开始游戏:<");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
			case 2:
				printf("退出游戏");
				break;
			default :
				break;
		}
	} while (i);
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}