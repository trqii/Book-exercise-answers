#include <stdio.h>

int main(void)
{
	int i, j, k;
	int sum[4][3] = { 0 };
	int tensu[2][4][3] = { {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}} ,
							{{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}} };
	for (i = 0; i < 2; i++)
		for (j = 0; j < 4; j++)
			for (k = 0; k < 3; k++)
				sum[j][k] += tensu[i][j][k];

	for (i = 0; i < 2; i++) {
		switch (i) {
		case 0: printf("第一次考试的分数\n"); break;
		case 1: printf("第二次考试的分数\n"); break;
		}
		for (j = 0; j < 4; j++) {
			for (k = 0; k < 3; k++)
				printf("%4d", tensu[i][j][k]);
			printf("\n");
		}
	}

	puts("总分");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++)
			printf("%4d", sum[i][j]);
		putchar('\n');
	}

	return 0;
}