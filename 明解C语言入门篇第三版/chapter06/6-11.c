#include <stdio.h>

#define NUMBER 7

int search_idx(const int v[], int idx[], int key, int n)
{
	int i, j = 0;
	for (i = 0; i < n; i++)
		if (v[i] == key)
			idx[j++] = i;
	return j;
}

int main(void)
{
	int v[NUMBER] = { 1, 7, 5, 7, 2, 4, 7 };
	int idx[NUMBER] = { 0 };
	int key = 7;
	int i;

	int n = search_idx(v, idx, key, NUMBER);

	for (i = 0; i < n; i++)
		printf("%d ", idx[i]);
	putchar('\n');

	return 0;
}