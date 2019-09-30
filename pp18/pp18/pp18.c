#define  _CRT_SECURE_NO_WARNINGS
//使用函数实现两个数的交换
#include <stdio.h>
void change(int *a,int* b)
{
	int c;
	c =* a;
	*a =* b;
	*b = c;
}
int main()
{
	int a;
	int b;
	scanf("%d %d", &a, &b);
	change(&a, &b);
	printf("a=%d b=%d", a, b);
	return 0;
}