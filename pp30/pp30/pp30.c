#define  _CRT_SECURE_NO_WARNINGS
//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
//�ǵݹ�
#include <stdio.h>
int fac(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <=n; i++)
	{
		ret= i*ret;
	}
	return ret;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret=fac(n);
	printf("%d", ret);
	return 0;
}