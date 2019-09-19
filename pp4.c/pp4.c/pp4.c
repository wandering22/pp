#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int max;
	int a[10];
	int i;
	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 0; i <= 9; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	printf("最大值为%d\n", max);
	system("pause");
	return 0;
}