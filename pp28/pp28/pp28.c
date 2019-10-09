#define  _CRT_SECURE_NO_WARNINGS
//递归和非递归分别实现strlen
//非递归
#include <stdio.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str !='\0')
	{
		count++;
		*str++;
	}
	return count;
}
int main()
{
	int ret= my_strlen("abc");
	printf("%d", ret);
	return 0;
}