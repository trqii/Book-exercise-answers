#include <stdio.h>
#include <ctype.h>

void del_digit(char* str)
{
	while (*str) {
		if (!isdigit(*str))
			putchar(*str);
		str++;
	}
}

int main(void)
{
	char str[128];

	printf("请输入字符串：");
	scanf("%s", str);

	puts("删除数字字符。");
	del_digit(str);

	return 0;
}