#include <stdio.h>

int main(void)
{
	char str[] = "ABC\0DEF";

	printf("字符串 str 为 \"%s\"。\n", str);

	return 0;
}