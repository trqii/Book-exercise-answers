#include <stdio.h>

int main(void)
{
	int i, n;
	int count = 0;

	printf("整数值：");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
			count++;
		}
	}
	printf("约数有%d个。\n", count);

	return 0;
}