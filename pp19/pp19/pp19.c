#define  _CRT_SECURE_NO_WARNINGS
//ʵ��һ�������ж�year�ǲ�������
#include <stdio.h>
int y(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		printf("��������");
	else
		printf("����������");
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