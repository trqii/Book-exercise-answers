#include <stdio.h>

int main(void)
{
	int i = 1, no;

	printf("正整数：");
	scanf("%d", &no);

	while (i++ <= no)
		puts("*");

	return 0;
}