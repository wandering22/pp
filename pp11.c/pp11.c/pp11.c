#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
void menu()
{
	printf("******welcome to here!******\n");
	printf("*********  1.play  *********\n");
	printf("*********  0.exit  *********\n");
	printf("*********have fun!**********\n");
}
void game()
{
	int a = 0;
	int guess;
	a = rand() % 100 + 1;
	while (1)
	{
		printf("�������:<");
		scanf("%d", &guess);
		if (guess<a)
			printf("��С��\n");
		else if (guess>a)
			printf("�´���\n");
		else
		{
			printf("��ϲ�¶ԣ��ǻۿɰ�������������СŮ�������㻹��˭��\n");
			break;
		}
		//printf("%d\n", a);
	}
}

	int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��0��1:<");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����0��1֮������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}