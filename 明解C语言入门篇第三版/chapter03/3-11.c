#include <stdio.h>

int main(void)
{
	int A, B;

	puts("请输入两个整数。");
	printf("整数A："); scanf("%d", &A);
	printf("整数B："); scanf("%d", &B);

	if ((A > B && A - B <= 10) || (A < B && A - B >= -10))
		puts("它们的差小于等于 10。");
	else
		puts("它们的差大于等于 11。");

	return 0;
}