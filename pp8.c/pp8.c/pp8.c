#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
//{
//	int i, j;
//	float sum;
//	float sum1 = 0.0;
//	float sum2 = 0.0;
//	//��С��100�ķ�ĸΪ��������Ϊ1��֮��
//	for (i = 1; i<100; i = i + 2)
//	{
//		sum1 = sum1 + 1.0 / i;
//	}
//	//��С��100�ķ�ĸΪż������Ϊ1��֮��
//	for (j = 2; j<101; j = j + 2)
//	{
//		sum2 = sum2 + 1.0 / j;
//	}
//	sum = sum1 - sum2;
//	printf("sum=%f\n", sum);
//	return 0;
//}
{
	// ��һ�� 1�� 100 �����������г��ֶ��ٴ�����9
	//Ҫ��ʮλ�͸�λ�Ƿ����9
	//��������10���࣬��ģΪ9���λ����9����������ʮ������Ϊ9��ʮλ����9
	int num;
	int count = 0;
	for (num = 1; num < 100; num++)
	{
		int a = num % 10;
		int b = num / 10;
		if (a == 9)
		{
			count++;
		}
		if (b == 9)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}
