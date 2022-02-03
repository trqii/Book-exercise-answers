#include <time.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_STAGE 9

int main(void)
{
	int i;
	int stage;
	int no;
	int ans;
	int num[MAX_STAGE];

	srand(time(NULL));
	do {
		ans = 3 + rand() % 997;
	} while (ans % 3 != 0);

	printf("请猜一个3~999之间的3的倍数的整数。\n\n");

	stage = 0;
	do {
		printf("还剩%d次机会。是多少呢：", MAX_STAGE - stage);
		scanf("%d", &no);
		num[stage++] = no;

		// 不是 3 的倍数立即结束
		//if (no % 3 != 0)
		//	break;

		// 不是 3 的倍数重新输入
		//if (no % 3 != 0)
		//{
		//	stage--;
		//	continue;
		//}

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