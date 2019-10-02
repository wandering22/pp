#define  _CRT_SECURE_NO_WARNINGS
//递归和非递归分别实现求第n个斐波那契数
//递归
#include <stdio.h>
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}
int main()
{
	int n = 0;
	int a = 0;
	scanf("%d", &n);
	fib(n);
	a = fib(n);
	printf("第%d个斐波那契数是%d\n",n,a);
	return 0;
}