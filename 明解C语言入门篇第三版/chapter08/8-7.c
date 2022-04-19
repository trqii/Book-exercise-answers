#include <stdio.h>

int combination(int n, int r)
{
	if (r == 0 || r == n)
		return 1;
	if (r == 1)
		return n;

	return combination(n - 1, r - 1) + combination(n - 1, r);
}

int main(void)
{
	int n, r;

	printf("请输入数字n的个数："); scanf("%d", &n);
	printf("请输入取出r的整数："); scanf("%d", &r);

	printf("组合数为：%d。\n", combination(n, r));

	return 0;
}