#include <stdio.h>

int min3(int a, int b, int c)
{
	int min = a;

	if (b < min) min = b;
	if (c < min) min = c;
	return min;
}

int main(void)
{
	int a, b, c;

	puts("请输入三个整数。");
	printf("整数 a："); scanf("%d", &a);
	printf("整数 b："); scanf("%d", &b);
	printf("整数 c："); scanf("%d", &c);

	printf("最小值是 %d。\n", min3(a, b, c));

	return 0;
}