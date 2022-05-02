#include <stdio.h>

void rev_string(char s[])
{
	int i;
	int len = 0;

	while (s[len])
		len++;

	for (i = 0; i < len / 2; i++) {
		char temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;

	}
}

int main(void)
{
	char s[100];

	printf("请输入一个字符串："); scanf("%s", s);

	rev_string(s);

	puts("反转后的字符串");
	printf("%s\n", s);

	return 0;
}