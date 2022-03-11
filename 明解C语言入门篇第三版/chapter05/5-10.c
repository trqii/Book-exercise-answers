#include <stdio.h>

int main(void)
{
	int i, j, k;
	int matrix1[4][3];
	int matrix2[3][4];
	int result[4][4] = { 0 };

	printf("请输入4行3列的矩阵：");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 3; j++)
			scanf("%d", &matrix1[i][j]);

	printf("请输入3行4列的矩阵：");
	for (i = 0; i < 3; i++)
		for (j = 0; j < 4; j++)
			scanf("%d", &matrix2[i][j]);

	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			for (k = 0; k < 3; k++)
				result[i][j] += matrix1[i][k] * matrix2[k][j];

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", result[i][j]);
		printf("\n");
	}

	return 0;
}