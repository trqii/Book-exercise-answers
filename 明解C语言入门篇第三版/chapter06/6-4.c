#include <stdio.h>

int sqr(int x)
{
	return x * x;
}

int pow4(int x)
{
	return sqr(x) * sqr(x);
}

int main(void)
{
	int n1;

	printf("请输入一个整数：");
	scanf("%d", &n1);

	printf("%d的四次幂是：%d。\n", n1, pow4(n1));

	return 0;
}