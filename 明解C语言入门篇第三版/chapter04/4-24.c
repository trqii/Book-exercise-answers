﻿#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("让我们来画一个金字塔。");
	printf("金字塔有几层：");
	scanf("%d", &len);

	for (i = 1; i <= len; i++) {
		for (j = 1; j <= len - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}