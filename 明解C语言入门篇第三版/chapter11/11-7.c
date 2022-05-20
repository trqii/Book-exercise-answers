#include <stdio.h>
#include <ctype.h>

void str_toupper(char* s)
{
	while (*s)
		*s++ = toupper(*s);
}

void str_tolower(char* s)
{
	while (*s)
		*s++ = tolower(*s);
}

int main(void)
{
	char str[128];

	printf("请输入字符串：");
	scanf("%s", str);

	str_toupper(str);
	printf("大写字母：%s\n", str);

	str_tolower(str);
	printf("小写字母：%s\n", str);

	return 0;
}