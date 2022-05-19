#include <stdio.h>

char* str_chr(const char* s, int c)
{
	while (*s)
		if (*s++ == c)
			return --s;

	return NULL;
}

int main(void)
{
	char s[128];
	char c;

	printf("请输入一个字符串："); scanf("%s", s); getchar();
	printf("请输入一个字符："); scanf("%c", &c);

	printf("在字符串\"%s\"中第一次出现了字符'%c'的位置 %s。\n", s, c, str_chr(s, c));

	return 0;
}