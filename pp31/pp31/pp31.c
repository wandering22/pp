#define  _CRT_SECURE_NO_WARNINGS
//递归和非递归分别实现求n的阶乘 
//递归
#include <stdio.h>
int fac(int n)
{
	if (n == 1)
		return 1;
	else
	return n*fac(n-1);
	
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = fac(n);
	printf("%d", ret);
	return 0;
}
