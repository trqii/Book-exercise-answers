#include <stdio.h>

int main(void)
{
	int ch;
	int count = 0;

	while ((ch = getchar()) != EOF)
		if (ch == '\n')
			count++;

	printf("一共输入了%d行。\n", count);

	return 0;
}