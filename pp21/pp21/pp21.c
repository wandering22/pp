#define  _CRT_SECURE_NO_WARNINGS
//实现一个函数，判断一个数是不是素数
#include <stdio.h>
void judge(int a)
{
	int i = 2;
	for (i = 2; i <= a - 1; i++)
	{
		if (a%i == 0)
			printf("它不是素数");
		else
			printf("它是素数");
		break;
	}
}
int main()
	{
		int a = 0;
		scanf("%d", &a);
		judge(a);
		return 0;
	}