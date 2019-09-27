#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	char password[10] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("密码正确，登陆成功！\n");
			break;
		}
		else
			printf("密码错误！\n");
	}
	if (i==3)
	printf("密码输入三次有误，退出程序！\n");
	return 0;
}