#define  _CRT_SECURE_NO_WARNINGS
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ���� 
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int input;
	while (1)
	{

		scanf("%d", &input);

		for (a = 1; a <= input; a++)
		{

			for (b = 1; b <= a; b++)

				printf("%d*%d=%d ", b, a, a*b);
			printf("\n");

		}
	}
	return 0;
}