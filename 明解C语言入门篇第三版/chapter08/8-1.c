#include <stdio.h>

#define diff(x, y) (((x) > (y)) ? (x) - (y) : (y) - (x))

int main(void)
{
	int n1, n2;

	puts("请输入两个数：");

	printf("第一个："); scanf("%d", &n1);
	printf("第二个："); scanf("%d", &n2);

	printf("二值之差：%d\n", diff(n1, n2));

	return 0;
}