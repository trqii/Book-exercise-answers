#include <stdio.h>

void rev_intary(int v[], int n)
{
	int i;
	for (i = 0; i < n / 2; i++) {
		int tmp = v[i];
		v[i] = v[n - i - 1];
		v[n - i - 1] = tmp;
	}
}

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int i;

	puts("数组倒序存储。");

	rev_intary(arr, 5);

	for (i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	putchar('\n');

	return 0;
}