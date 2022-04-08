#include <stdio.h>

int main(void)
{
	float x;
	int i = 0;

	for (x = 0.0; x <= 1.0; x += 0.01)
		printf("x = %f x = %f\n", x, i++ / 100.0);

	return 0;
}