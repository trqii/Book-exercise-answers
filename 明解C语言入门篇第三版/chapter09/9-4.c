#include <stdio.h>

void null_string(char s[])
{
	int i = 0;
	while (s[i])
		s[i++] = '\0';
}

int main(void)
{
	char s[] = "abc";

	printf("%s\n", s);

	null_string(s);
	printf("%s\n", s);

	return 0;
}