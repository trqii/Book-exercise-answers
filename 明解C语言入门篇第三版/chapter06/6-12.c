#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
	int i, j, k;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			for (k = 0; k < 3; k++)
				c[i][j] += a[i][k] * b[k][j];
}

int main(void)
{
	int a[4][3] = { {1, 2, 3}, {2, 3, 4}, {3, 4, 5}, {6, 7, 8} };
	int b[3][4] = { {1, 1, 2, 3}, {2, 2, 3, 4}, {3, 3, 4, 5} };
	int c[4][4] = { 0 };
	int i, j;

	mat_mul(a, b, c);

	puts("矩阵乘积。");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", c[i][j]);
		printf("\n");
	}

	return 0;
}