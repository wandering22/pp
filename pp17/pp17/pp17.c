#define  _CRT_SECURE_NO_WARNINGS
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��,
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
#include <stdio.h>
int p(int input)
{
	int a;
	int b;
	for (a = 1; a <= input; a++)
	{

		for (b = 1; b <= a; b++)

			printf("%d*%d=%d ", b, a, a*b);
		printf("\n");

	}
}
int main()
{
	int input;
	while (1)
	{
		scanf("%d", &input);
		p(input);
	}
	return 0;
}