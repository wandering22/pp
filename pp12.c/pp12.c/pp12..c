#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	while (1)
	{
		int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		int i;
		int right = (sizeof(arr) / sizeof(arr[0])) - 1;
		int left = 0;
		printf("��������Ҫ���ҵ�����:>");
		scanf("%d", &i);
		while (left <= right)
		{
			int mid = (left + right) / 2;
			if (arr[mid] < i)
				left = mid + 1;
			else if (arr[mid]>i)
				right = mid - 1;
			else
			{
				printf("�����±�Ϊ%d\n", mid);
				break;
			}
		}
		if (left > right)
			printf("��Ҫ���ҵ����ݲ��ڷ�Χ��\n");
	}
	return 0;
}