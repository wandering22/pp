#define  _CRT_SECURE_NO_WARNINGS
//ʵ��һ���������ж�һ�����ǲ�������
#include <stdio.h>
void judge(int a)
{
	int i = 2;
	for (i = 2; i <= a - 1; i++)
	{
		if (a%i == 0)
			printf("����������");
		else
			printf("��������");
		break;
	}
}
int main()
	{
		int a = 0;
		scanf("%d", &a);
		judge(a);
		return 0;
	}