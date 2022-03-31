#include <stdio.h>

unsigned set_n(unsigned x, int pos, int n)
{
	int i;
	for (i = pos; i <= n; i++)
		x |= (1U << (sizeof(int) * 8 - i));

	return x;
}

unsigned inverse_n(unsigned x, int pos, int n)
{
	int i;
	for (i = pos; i <= n; i++)
		x ^= (1U << (sizeof(int) * 8 - i));
	return x;
}

unsigned reset_n(unsigned x, int pos, int n)
{
	int i;
	for (i = pos; i <= n; i++)
		x &= (~0U ^ (1U << (sizeof(int) * 8 - i)));
	return x;
}

int main(void)
{
	unsigned x, n, m;

	printf("非负整数："); scanf("%u", &x);
	printf("从第几位到第几位："); scanf("%u%u", &n, &m);

	printf("第%d位到第%d位设置为1后的值%u。\n", n, m, set_n(x, n, m));
	printf("第%d位到第%d位设置为0后的值%u。\n", n, m, reset_n(x, n, m));
	printf("第%d位到第%d位设置取反后的值%u。\n", n, m, inverse_n(x, n, m));

	return 0;
}