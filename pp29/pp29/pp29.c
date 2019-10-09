#define  _CRT_SECURE_NO_WARNINGS
//递归和非递归分别实现strlen
//递归
#include <stdio.h>
int my_strlen(char*str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}
int main()
{
	int ret = my_strlen("abc");
	printf("%d\n", ret);
	return 0;
}