#define  _CRT_SECURE_NO_WARNINGS
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
#include <stdio.h>
int DigitSum(int n)
{
	int ret = 0;
	int i = 0;
	if (n != 0)
	{
		i = n % 10;
		n = n / 10;
		ret = i + DigitSum(n);
	}
	return ret;
}
int main()
{
	int n = 0;
		scanf("%d", &n);
		int ret = DigitSum(n);
		printf("组成它的数字之和是%d\n", ret);
		return 0;
	
}