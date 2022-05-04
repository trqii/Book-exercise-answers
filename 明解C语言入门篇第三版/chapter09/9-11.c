#include <stdio.h>

#define NUMBER 10
#define MAX 128

void put_strary(const char s[][MAX], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("s[%d] = \"%s\"\n", i, s[i]);
}

int is_sign(char s[])
{
	int i;
	for (i = 0; i < 5; i++)
		if (s[i] != '$')
			return 0;
	return 1;
}

int input(char s[][MAX], int n)
{
	int i;
	for (i = 0; i < n; i++) {
		scanf("%s", s[i]);
		if (is_sign(s[i]))
			return i;
	}
	return i;
}

int main(void)
{
	char cs[NUMBER][MAX];

	int n = input(cs, NUMBER);

	put_strary(cs, n);

	return 0;
}