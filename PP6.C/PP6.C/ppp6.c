#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main()
{
	system("color 0B");
	int a, b;
	printf("������������");
	scanf("%d,%d", &a, &b);
	int max, min;
	if (a > b) //�Ƚ��������Ĵ�С��������Ϊ��������С����Ϊ����
	{
		max = a;
		min = b;
	}
	else
	{
		max = b;
		min = a;
	}
	int i, c;
	for (i = 1; i < max; i++) //��֪��Ҫ���ж��ٴε����࣬��������һ���ϴ��ѭ������
	{
		if (c = max %min) //��������Ϊ0��
		{
			c = max%min; //��������
			max = min; //��С����Ϊ������
			min = c; //������Ϊ����
		}
		else
		{
			c = min; //���Ϊ0��ֱ������ѭ����
			break;
		}
	}
	printf("%d�����Լ��", c);
	system("pause");
	return 0;
}