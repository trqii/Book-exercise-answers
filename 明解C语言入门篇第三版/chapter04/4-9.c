#include <stdio.h>

int main(void)
{
	int i = 1, no;

	printf("正整数：");
	scanf("%d", &no);

	while (i <= no) {
		if (i % 2)
			printf("+");
		else
			printf("-");
		i++;
	}

	return 0;
}