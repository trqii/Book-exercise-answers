#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	int stage;
	int no;
	int ans;
	int num[16];
	int MAX_STAGE = 0;
	int num1;
	int num2;
	int tmp;

	srand(time(NULL));

	// 生成随机数
	do {
		num1 = rand() % 10000;
		num2 = rand() % 10000;
		ans = rand() % 10000;
	} while ((num1 == num2) || !(ans >= num1 && ans <= num2) && !(ans <= num1 && ans >= num2));

	if (num1 > num2) {
		tmp = num1;
		num1 = num2;
		num2 = tmp;
	}
	printf("请猜一个%d~%d的整数。\n\n", num1, num2);

	// 求合适次数
	tmp = num2 - num1;
	i = 1;
	while (i <= tmp) {
		MAX_STAGE++;
		i *= 2;
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