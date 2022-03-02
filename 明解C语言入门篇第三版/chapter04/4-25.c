#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("让我们来画一个向下的金字塔。");
	printf("金字塔有几层：");
	scanf("%d", &len);

	for (i = len; i >= 1; i--) {
		for (j = 1; j <= len - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("%d", (len - i + 1) % 10);
		printf("\n");
	}

	return 0;
}