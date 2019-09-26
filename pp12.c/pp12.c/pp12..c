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
		printf("请输入您要查找的数字:>");
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
				printf("它的下标为%d\n", mid);
				break;
			}
		}
		if (left > right)
			printf("您要查找的内容不在范围内\n");
	}
	return 0;
}