#include <stdio.h>

void put_count()
{
	static count = 1;
	printf("第%d次\n", count++);
}

int main(void)
{
	int i;
	for (i = 0; i < 3; i++) {
		printf("put_count: ");
		put_count();
	}

	return 0;
}