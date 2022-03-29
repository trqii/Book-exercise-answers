#include <stdio.h>

unsigned rrotate(unsigned x, int n)
{
	return (x >> n);
}

unsigned lrotate(unsigned x, int n)
{
	return (x << n);
}

int main(void)
{
	unsigned x, n;

	printf("非负整数："); scanf("%u", &x);
	printf("位移位数："); scanf("%u", &n);

	printf("左移%d位：%u\n", n, lrotate(x, n));
	printf("右移%d位：%u\n", n, rrotate(x, n));

	return 0;
}