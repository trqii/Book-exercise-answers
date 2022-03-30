#include <stdio.h>

unsigned set(unsigned x, int pos)
{
	return (x | (1U << (sizeof(int) * 8 - pos)));
}

unsigned inverse(unsigned x, int pos)
{
	return (x ^ (set(0U, pos)));
}

unsigned reset(unsigned x, int pos)
{
	return (x & (inverse(~0U, pos)));
}

int main(void)
{
	unsigned x, n;

	printf("非负整数："); scanf("%u", &x);
	printf("改变位数："); scanf("%u", &n);

	printf("第%d位设置为1后的值%u。\n", n, set(x, n));
	printf("第%d位设置为0后的值%u。\n", n, reset(x, n));
	printf("第%d位设置取反后的值%u。\n", n, inverse(x, n));

	return 0;
}