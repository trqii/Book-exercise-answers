#include <stdio.h>

int main(void)
{
	int i, j;
	int tensu[6][2];
	int stu[6] = { 0 };
	int sco[2] = { 0 };

	for (i = 0; i < 6; i++)
		for (j = 0; j < 2; j++) {
			scanf("%d", &tensu[i][j]);
			stu[i] += tensu[i][j];
			sco[j] += tensu[i][j];
		}

	puts("各门课程总分及平均分");
	for (i = 0; i < 2; i++)
		printf("%3d  %.1f\n", sco[i], sco[i] / 6.0);

	puts("各个学生总分及平均分");
	for (i = 0; i < 6; i++)
		printf("%3d  %.1f\n", stu[i], stu[i] / 2.0);

	return 0;
}