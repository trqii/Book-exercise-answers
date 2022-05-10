#include <stdio.h>

void set_idx(int* v, int n)
{
	int i;
	for (i = 0; i < n; i++)
		v[i] = i;
}

int main(void)
{
	int v[5];
	int i;

	set_idx(v, 5);

	puts("赋上和下标相同的值");
	for (i = 0; i < 5; i++)
		printf("v[%d] = %d\n", i, v[i]);

	return 0;
}