#define  _CRT_SECURE_NO_WARNINGS
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
//�ݹ�
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
