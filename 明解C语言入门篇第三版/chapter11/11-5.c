#include <stdio.h>

int str_chnum(const char* s, int c)
{
	int count = 0;

	while (*s)
		if (*s++ == c)
			count++;

	return count;
}

int main(void)
{
	char s[128];
	char c;

	printf("请输入一个字符串："); scanf("%s", s); getchar();
	printf("请输入一个字符："); scanf("%c", &c);

	printf("在字符串\"%s\"中出现了字符'%c'%d次。\n", s, c, str_chnum(s, c));

	return 0;
}