#include <stdio.h>

int min_of(const int v[], int n)
{
	int i;
	int min = v[0];

	for (i = 1; i < n; i++)
		if (min > v[i])
			min = v[i];

	return min;
}

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };

	printf("数组中最小值为：%d。\n", min_of(arr, 5));

	return 0;
}