#define  _CRT_SECURE_NO_WARNINGS
//��ӡ100-200֮�������
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i=100;i<=200;i++)
	{
		for (j = 2; j <= i - 1; j++)

		{
			if (i%j == 0)
			{
				break;
			}
			else
			{
				printf("%d ", i);
				count++;
				break;
			}
		}
	}
	printf("\ncount=%d", count);
	return 0;
}