#define  _CRT_SECURE_NO_WARNINGS
//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� 
//ʵ�֣��������ַ����е��ַ��������С�
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
#include <stdio.h>
void reverse_string(char *string)
{
	if (*string != '\0')
		string++;
		reverse_string(*string);
	printf("%c", *string);
}
int main()
{
	char *string="abcde";
	reverse_string(string);
	return 0;
}