#define  _CRT_SECURE_NO_WARNINGS
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ݹ�
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