#define  _CRT_SECURE_NO_WARNINGS
//����һ�����飬 
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
#include <stdio.h>
#include <string.h>
void init(int arr[10])
{
	int j = 0;
	for (j = 0; j < 10; j++)
		arr[j] = j;
	printf("%d", arr[10]);
}
void empty(int arr[10],int*sz)
{
	memset(arr[10], 0,*sz*sizeof(*arr[0]));
	printf("%d", arr[10]);
}
void reverse(int arr[10],int*sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <*sz; i++)
	{
		j = arr[i];
		arr[i] = arr[*sz - 1 - i];
	arr[*sz - 1 - i] = j;
	}
	printf("%d", arr[10]);
}
int main()
{
	int arr[10] = { 1,2,4,5,6,7,8,9,10};
	int sz = (sizeof arr / sizeof(arr[0]));
	init(arr);//��ʼ������
	empty(&arr,&sz);//�������
	reverse(&arr,&sz);//��������Ԫ��
	printf("%s", arr[10] );
	return 0;
}