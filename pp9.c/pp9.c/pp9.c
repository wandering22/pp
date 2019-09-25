#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 11;i+=2)
//	
//
//
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a = 1;
	int b = 0;
	int c = 0;
	for (a = 1; a <= 9 ; a++)
	for (b = 0; b <= 9;b++)
	for (c = 0; c <= 9;c++)
	if (a * 100 + b * 10 + c * 1 == a*a*a + b*b*b + c*c*c)
		printf("%d\n", a * 100 + b * 10 + c * 1);
	return 0;
}
