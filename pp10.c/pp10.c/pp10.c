#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a = 0;
	int sum;
	printf("������0-9��һ����:<");
	scanf("%d", &a);
	sum = a * 5 + a * 10 * 4 + a * 100 * 3 + a * 1000 * 2 + a * 10000;
	printf("%d\n", sum);
	return 0;
}