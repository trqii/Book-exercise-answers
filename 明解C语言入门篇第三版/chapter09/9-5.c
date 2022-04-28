#include <stdio.h>

int str_char(const char s[], int c)
{
	int count = -1;
	int i = 0;

	while (s[i])
		if (s[i++] == c) {
			count = i - 1;
			break;
		}

	return count != -1 ? count : -1;
}

int main(void)
{
	char s[100];
	char c;

	printf("请输入一个字符串："); scanf("%s", s); getchar();
	printf("请输入一个字符："); scanf("%c", &c);

	printf("字符中 %s 中第一次出现字符 \'%c\'的位置是 %d 。\n", s, c, str_char(s, c));

	return 0;
}