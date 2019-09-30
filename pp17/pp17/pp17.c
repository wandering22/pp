#define  _CRT_SECURE_NO_WARNINGS
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定,
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表
#include <stdio.h>
int p(int input)
{
	int a;
	int b;
	for (a = 1; a <= input; a++)
	{

		for (b = 1; b <= a; b++)

			printf("%d*%d=%d ", b, a, a*b);
		printf("\n");

	}
}
int main()
{
	int input;
	while (1)
	{
		scanf("%d", &input);
		p(input);
	}
	return 0;
}