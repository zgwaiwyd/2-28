#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 1000; i++)
	{
		printf("���������Ұ���\n");
		scanf("%s", password);
		if (strcmp(password, "����Ұ���") == 0)
		{
			system("cls");
			Sleep(2000);
			printf("�������㣡\n");
			Sleep(2000);
			system("cls");
			printf("\n��ƫ�������ţ�\n");
			Sleep(2000);
			system("cls");
			Sleep(2000);
			printf("\n���˽ڿ���!\n");
			Sleep(2000);
			break;
		}
	}
}