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
	printf("��ʼ��Ϸ\n");
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitBoard( board, ROW, COL );
	//��ӡ����
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
		printf("��Ϸ���������Ӯ\n");
	else if (ret == '#')
		printf("��Ϸ����������Ӯ\n");
	else if (ret == 'Q')
		printf("��Ϸ������ƽ��\n");
}
void test()
{
	int i = 0;
	do
	{
		menu();
		printf("������0��1��ѡ���Ƿ�ʼ��Ϸ\n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ");
			break;
		default:
			printf("�����������������0��1\n");
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