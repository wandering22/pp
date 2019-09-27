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
		printf("请猜数字:<");
		scanf("%d", &guess);
		if (guess<a)
			printf("猜小了\n");
		else if (guess>a)
			printf("猜大了\n");
		else
		{
			printf("恭喜猜对，智慧可爱，聪明伶俐的小女孩除了你还有谁？\n");
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
		printf("请选择0或1:<");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请在0和1之间重新选择\n");
			break;
		}
	} while (input);
	return 0;
}