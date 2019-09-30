#define  _CRT_SECURE_NO_WARNINGS
//实现一个函数判断year是不是闰年
#include <stdio.h>
int y(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("它是闰年");
	else
		printf("它不是闰年");
}
int main()
{
	int year;
	while (1)
	{
		scanf("%d", &year);
		y(year);
	}
	return 0;
}