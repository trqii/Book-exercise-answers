#include <stdio.h>

int main(void)
{
	printf("%d\n", 1 > 2);
	printf("%d\n", 2 > 1);

	printf("%d\n", 1 < 2);
	printf("%d\n", 2 < 1);

	printf("%d\n", 1 == 2);
	printf("%d\n", 2 == 1);
	printf("%d\n", 1 == 1);
	printf("%d\n", 2 == 2);

	return 0;
}