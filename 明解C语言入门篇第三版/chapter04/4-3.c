#include <stdio.h>

int main(void)
{
	int no, sign;

	printf("请输入一个正整数：");
	scanf("%d", &no);

	sign = no;
	while (no >= 0) {
		printf("%d ", no);
		no--;
	}
	if (sign >= 0)
		printf("\n");

	return 0;
}