#include <stdio.h>

void put_stringr(const char s[])
{
	int i = 0;
	while (s[i])
		i++;

	while (--i >= 0)
		putchar(s[i]);
}

int main(void)
{
	char s[100];

	printf("请输入一个字符串："); scanf("%s", s);

	put_stringr(s);

	return 0;
}