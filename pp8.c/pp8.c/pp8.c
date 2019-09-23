#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
//{
//	int i, j;
//	float sum;
//	float sum1 = 0.0;
//	float sum2 = 0.0;
//	//求小于100的分母为奇数分子为1数之和
//	for (i = 1; i<100; i = i + 2)
//	{
//		sum1 = sum1 + 1.0 / i;
//	}
//	//求小于100的分母为偶数分子为1数之和
//	for (j = 2; j<101; j = j + 2)
//	{
//		sum2 = sum2 + 1.0 / j;
//	}
//	sum = sum1 - sum2;
//	printf("sum=%f\n", sum);
//	return 0;
//}
{
	// 数一下 1到 100 的所有整数中出现多少次数字9
	//要看十位和各位是否包含9
	//该数关于10求余，其模为9则个位包含9；该数除以十，其商为9则十位包含9
	int num;
	int count = 0;
	for (num = 1; num < 100; num++)
	{
		int a = num % 10;
		int b = num / 10;
		if (a == 9)
		{
			count++;
		}
		if (b == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
