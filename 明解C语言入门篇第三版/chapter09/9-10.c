#include <stdio.h>

void del_digit(char s[])
{
	int i = 0;
	while (s[i]) {
		if (s[i] < '0' || s[i] > '9')
			putchar(s[i]);
		i++;
	}
}

int main(void)
{
	char s[100];

	printf("请输入一个字符串："); scanf("%s", s);

	puts("去除数字字符后");
	del_digit(s);

	return 0;
}