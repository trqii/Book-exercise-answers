#include <stdio.h>

#define NUMBER 10

int is_sign(char s[])
{
	int i;
	for (i = 0; i < 5; i++)
		if (s[i] != '$')
			return 0;
	return 1;
}

int main(void)
{
	int i;
	char s[NUMBER][128];

	for (i = 0; i < NUMBER; i++) {
		printf("s[%d]：", i);
		scanf("%s", s[i]);
		if (is_sign(s[i]))
			break;
	}
	for (i = 0; i < NUMBER; i++) {
		if (is_sign(s[i]))
			break;
		else
			printf("s[%d] = \"%s\"\n", i, s[i]);
	}

	return 0;
}