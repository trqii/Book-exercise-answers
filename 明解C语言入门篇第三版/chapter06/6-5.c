#include <stdio.h>

int sumup(int n)
{
	int sum = 0;
	while (n) {
		sum += n;
		n--;
	}
	return sum;
}

int main(void)
{
	int n1;

	printf("请输入一个整数：");
	scanf("%d", &n1);

	printf("1到%d之间所有的整数和是：%d。\n", n1, sumup(n1));

	return 0;
}