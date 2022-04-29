#include <stdio.h>

int str_chnum(const char s[], int c)
{
	int count = 0;
	int i = 0;

	while (s[i])
		if (s[i++] == c)
			count++;

	return count;
}

int main(void)
{
	char s[100];
	char c;

	printf("请输入一个字符串："); scanf("%s", s); getchar();
	printf("请输入一个字符："); scanf("%c", &c);

	printf("字符中 %s 中出现字符 \'%c\' %d 次。\n", s, c, str_chnum(s, c));

	return 0;
}