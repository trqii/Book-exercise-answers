#include <stdio.h>

int gcd(int x, int y)
{
	return y ? gcd(y, x % y) : x;
}

int main(void)
{
	int x, y;

	printf("请输入一个整数x："); scanf("%d", &x);
	printf("请输入一个整数y："); scanf("%d", &y);

	printf("最大公约数为：%d。\n", gcd(x, y));

	return 0;
}