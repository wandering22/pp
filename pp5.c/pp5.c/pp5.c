#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b, c, max;
	scanf("%d %d %d", &a, &b, &c);
	system("pause");
	if (a < b)
	{
		max = a;
		a = b;
		b = max;
	}
	if (a<c)
	{
		max = a;
		a = c;
		c = max;
	}
	if (b<c)
	{
		max = b;
		b = c;
		c = max;
	}
	printf("从大到小的顺序是：%d %d %d", a, b, c);
	system("pause");
	return 0;
}