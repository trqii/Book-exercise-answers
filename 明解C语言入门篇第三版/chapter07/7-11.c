#include <stdio.h>

int main(void)
{
	float x;
	int i = 0;
	double sum1 = 0, sum2 = 0;

	for (x = 0.0; x <= 1.0; x += 0.01)
		sum1 += x, sum2 += i++ / 100.0;

	printf("%f %f\n", sum1, sum2);

	return 0;
}