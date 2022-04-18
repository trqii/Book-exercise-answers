#include <stdio.h>

int factorial(int n)
{
	int ret = 1;
	int i;

	for (i = 2; i <= n; i++)
		ret *= i;

	return ret;
}

int main(void)
{
	int num;

	printf("请输入一个整数：");
	scanf("%d", &num);

	printf("%d 的阶乘为 %d。\n", num, factorial(num));

	return 0;
}