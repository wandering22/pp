#define  _CRT_SECURE_NO_WARNINGS
//递归和非递归分别实现求第n个斐波那契数
//非递归
#include <stdio.h>
int main()
{
	int q = 0;
	int a = 1;
	int n = 0;
	int i = 0;
	int b=1;
		scanf("%d", &n);
		if (n <= 2)
			q = 1;
			for (i = 3; i <= n; i++)
			{
				q = a + b;
				a = b;
				b = q;
			}
		
		printf("第%d个斐波那契数是%d\n",n,q);
	return 0;
}
