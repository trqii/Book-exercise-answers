﻿#include <stdio.h>

int main(void)
{
	int i, n;

	printf("显示多少个*：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		printf("*");
		if (i % 5 == 0)
			printf("\n");
	}

	return 0;
}