﻿#include <stdio.h>

int main(void)
{
	int month;

	printf("请输入月份：");
	scanf("%d", &month);

	switch (month) {
	case 3: case 4: case 5:
		printf("%d 月是春季。\n", month);
		break;
	case 6: case 7: case 8:
		printf("%d 月是夏季。\n", month);
		break;
	case 9: case 10: case 11:
		printf("%d 月是秋季。\n", month);
		break;
	case 1: case 2: case 12:
		printf("%d 月是冬季。\n", month);
		break;
	default:
		printf("%d 月不存在 ！！\a\n", month);
		break;
	}

	return 0;
}