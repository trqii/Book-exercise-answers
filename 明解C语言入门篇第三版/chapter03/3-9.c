#include <stdio.h>

int main(void)
{
	int n1, n2, n3, min;

	puts("请输入三个整数。");
	printf("整数 1 ："); scanf("%d", &n1);
	printf("整数 2 ："); scanf("%d", &n2);
	printf("整数 3 ："); scanf("%d", &n3);

	min = n1;
	min = (n2 < min) ? n2 : min;
	min = (n3 < min) ? n3 : min;

	printf("最小值是 %d。\n", min);

	return 0;
}