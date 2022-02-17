#include <stdio.h>

int main(void)
{
	int a, b, sum = 0;
	int tmp;

	puts("请输入两个整数。");
	printf("整数 a："); scanf("%d", &a);
	printf("整数 b："); scanf("%d", &b);

	if (a > b) {
		tmp = a;
		a = b;
		b = tmp;
	}

	tmp = a;
	do {
		sum += tmp;
		tmp++;
	} while (tmp <= b);

	printf("大于等于%d小于等于%d的所有整数的和是%d。\n", a, b, sum);

	return 0;
}