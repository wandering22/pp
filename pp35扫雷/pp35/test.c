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
	char mine[ROWS][COLS] = { 0 };//��
	char show[ROWS][COLS] = { 0 };//����
	InitBoard(mine, ROWS, COLS, '0');//��ʼ��
	InitBoard(show, ROWS, COLS, '*');
	//Display(mine, ROW, COL);//��ӡ����
	Display(show, ROW, COL);
	//������
	Set(mine, ROW, COL);
	Display(mine, ROW, COL);
	//�Ų���
	Find(mine, show, ROW, COL);
}
void test()
{
	int i = 0;
	do
	{
		menu();
		printf("������0��1��ѡ���Ƿ�ʼ��Ϸ:<");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			game();
			break;
			case 2:
				printf("�˳���Ϸ");
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