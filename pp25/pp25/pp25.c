#define  _CRT_SECURE_NO_WARNINGS
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
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
		printf("�����������֮����%d\n", ret);
		return 0;
	
}