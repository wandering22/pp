#define  _CRT_SECURE_NO_WARNINGS
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//�ݹ�
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
	printf("��%d��쳲���������%d\n",n,a);
	return 0;
}