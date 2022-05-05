#include <stdio.h>

#define NUMBER 10
#define MAX 128

void rev_string(char s[][128], int n)
{
	int i;
	for (i = 0; i < n; i++) {
		int j = 0;
		int k;

		while (s[i][j])
			j++;

		for (k = 0; k < j / 2; k++) {
			char temp = s[i][k];
			s[i][k] = s[i][j - k - 1];
			s[i][j - k - 1] = temp;
		}
	}
}

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
	char s[NUMBER][MAX];

	int n = input(s, NUMBER);

	rev_string(s, n);

	put_strary(s, n);

	return 0;
}