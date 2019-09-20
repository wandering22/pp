#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b,c, max;
	scanf("%d %d", &a, &b);
	c = a%b;
	while (a != b);
	{
		if (c== 0)
			printf("最大公约数为：%d", b);
		else
			a = b;
		b = c;		
	}
	return 0;
}