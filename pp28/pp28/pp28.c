#define  _CRT_SECURE_NO_WARNINGS
//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ�
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