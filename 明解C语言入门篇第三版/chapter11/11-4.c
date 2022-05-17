#include <stdio.h>

void put_string(const char* s)
{
	while (*s)
		putchar(*s++);
}

int main(void)
{
	char s[128];

	printf("请输入一个字符串："); scanf("%s", s);

	puts("你输入的是。");
	put_string(s);
	putchar('\n');

	return 0;
}