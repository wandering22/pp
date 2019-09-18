#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("请输入两个整数：");
	scanf("%d%d\n", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d %d\n", a, b);
	return 0;
}
