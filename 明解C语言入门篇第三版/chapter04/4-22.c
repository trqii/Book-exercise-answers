#include <stdio.h>

int main(void)
{
	int i, j, n1, n2;

	puts("让我们来画一个长方形。");
	printf("一边：");   scanf("%d", &n1);
	printf("另一边："); scanf("%d", &n2);

	if (n1 > n2) {
		int tmp = n1;
		n1 = n2;
		n2 = tmp;
	}

	for (i = 1; i <= n1; i++) {
		for (j = 1; j <= n2; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}