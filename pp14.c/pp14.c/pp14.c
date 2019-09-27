#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int input;
	while ((input = getchar()) != EOF)
	{
		printf("ÇëÊäÈë:>");
		scanf("%s", &input);
		if (input >= 'A'&&input <= 'Z')
			putchar(input + 32);
		else if (input >= 'a'&&input <= 'z')
			putchar(input - 32);
		else
			break;
	}
	return 0;
}