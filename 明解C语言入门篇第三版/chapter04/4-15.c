#include <stdio.h>

int main(void)
{
	int start, end, step, i;

	printf("开始数值（cm）："); scanf("%d", &start);
	printf("结束数值（cm）："); scanf("%d", &end);
	printf("间隔数值（cm）："); scanf("%d", &step);

	for (i = start; i <= end; i += step)
		printf("%dcm    %.2fkg\n", i, (i - 100) * 0.9);

	return 0;
}