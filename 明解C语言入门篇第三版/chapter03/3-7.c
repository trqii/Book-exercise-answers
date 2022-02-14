#include <stdio.h>

int main(void)
{
	int n1, n2, n3, n4, max;

	puts("请输入四个整数。");
	printf("整数 1 ："); scanf("%d", &n1);
	printf("整数 2 ："); scanf("%d", &n2);
	printf("整数 3 ："); scanf("%d", &n3);
	printf("整数 4 ："); scanf("%d", &n4);

	max = n1;
	if (n2 > max) max = n2;
	if (n3 > max) max = n3;
	if (n4 > max) max = n4;

	printf("最大值是 %d。\n", max);

	return 0;
}