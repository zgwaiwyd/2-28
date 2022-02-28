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
		printf("ÇëÊäÈë¸ç¸çÎÒ°®Äã\n");
		scanf("%s", password);
		if (strcmp(password, "¸ç¸çÎÒ°®Äã") == 0)
		{
			system("cls");
			Sleep(2000);
			printf("¸ç¸ç¸ü°®Äã£¡\n");
			Sleep(2000);
			system("cls");
			printf("\nÎÒÆ«°®µÄÀÏÆÅ£¡\n");
			Sleep(2000);
			system("cls");
			Sleep(2000);
			printf("\nÇéÈË½Ú¿ìÀÖ!\n");
			Sleep(2000);
			break;
		}
	}
}