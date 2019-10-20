#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void replaceSpace(char *str, int length) {
	int i = 0;
	for (i = 0; i<length; i++)
	{
		if (str[i] == ' ')
			str[i] = '%20';
	}
	printf("%c\n", str);
}

int main()
{
	char str[] = "Hello Bit";
	int len = strlen(str);
	replaceSpace(str, len);
	return 0;
}