#define  _CRT_SECURE_NO_WARNINGS
//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
#include <stdio.h>
int root(int n,int k)
{
	if (k == 1)
		return n;
	else
	return n*root(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int ret=root(n,k);
	printf("%d��%d�η���%d", n, k, ret);
	return 0;
}