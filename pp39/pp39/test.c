#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	//����-10��Ԫ��-int 
	int arr[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//�±� 
	//0 
    printf("%d\n", arr[5]); 
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	while (i < sz)
	{
		printf("%d ", arr[i]);
		i++;
	}
	//int arr2[] = {1,2,3,4,5,6,7,8,9,10}; 

	return 0;
}
