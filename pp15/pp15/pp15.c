#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//¥Ú”°¡‚–Œ*
int main()
{
	int i = 0;
	int line = 0;
	int j = 0;
	scanf("%d", &line);
	for (i = 0; i < line ; i++)
	{
		for (j = 0; j < line - i - 1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line - 1; i++)
	{
		for (j = 0; j < i + 1; j++)
			printf(" ");
		for (j = 0; j <2 * (line - 1 - i) - 1; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}