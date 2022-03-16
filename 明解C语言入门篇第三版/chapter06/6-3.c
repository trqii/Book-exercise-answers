#include <stdio.h>

int cube(int x)
{
	return x * x * x;
}

int main(void)
{
	int n1;

	printf("请输入一个整数：");
	scanf("%d", &n1);

	printf("%d的立方是：%d。\n", n1, cube(n1));

	return 0;
}