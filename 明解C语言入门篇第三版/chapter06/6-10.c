#include <stdio.h>

void intary_rcpy(int v1[], const int v2[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		v1[i] = v2[n - i - 1];
}

int main(void)
{
	int arr1[5] = { 0 };
	int arr2[5] = { 1, 2, 3, 4, 5 };
	int i;

	puts("v2倒序排列。");

	intary_rcpy(arr1, arr2, 5);

	for (i = 0; i < 5; i++)
		printf("%d ", arr1[i]);
	putchar('\n');

	return 0;
}