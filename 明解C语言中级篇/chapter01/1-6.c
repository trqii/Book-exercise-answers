#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int stage;
	int no;
	int ans;
	int num[14];
	int input;
	int MAX_STAGE;

	srand(time(NULL));
	printf("请选择难度等级（1）1 ~ 9 (2) 1 ~ 99 (3) 1 ~ 999 (4) 1 ~ 9999:\n");
	scanf("%d", &input);
	if (input == 1) {
		ans = 1 + rand() % 9;
		printf("请猜一个%d~%d的整数。\n\n", 1, 9);
		MAX_STAGE = 4;
	}
	else if (input == 2) {
		ans = 1 + rand() % 99;
		printf("请猜一个%d~%d的整数。\n\n", 1, 99);
		MAX_STAGE = 7;
	}
	else if (input == 3) {
		ans = 1 + rand() % 999;
		printf("请猜一个%d~%d的整数。\n\n", 1, 999);
		MAX_STAGE = 10;
	}
	else if (input == 4) {
		ans = 1 + rand() % 9999;
		printf("请猜一个%d~%d的整数。\n\n", 1, 9999);
		MAX_STAGE = 14;
	}

	stage = 0;
	do {
		printf("还剩%d次机会。是多少呢：", MAX_STAGE - stage);
		scanf("%d", &no);
		num[stage++] = no;

		if (no > ans)
			printf("\a再小一点。\n");
		else if (no < ans)
			printf("\a再大一点。\n");
	} while (no != ans && stage < MAX_STAGE);

	if (no != ans)
		printf("\a很遗憾，正确答案是%d。\n", ans);
	else {
		printf("回答正确。\n");
		printf("您用了%d次猜中了。\n", stage);
	}

	puts("\n--- 输入记录 ---");
	for (i = 0; i < stage; i++)
		printf(" %2d : %4d %+4d\n", i + 1, num[i], num[i] - ans);

	return 0;
}