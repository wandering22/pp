#define  _CRT_SECURE_NO_WARNINGS
//创建一个数组， 
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
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
	init(arr);//初始化数组
	empty(&arr,&sz);//清空数组
	reverse(&arr,&sz);//逆置数组元素
	printf("%s", arr[10] );
	return 0;
}