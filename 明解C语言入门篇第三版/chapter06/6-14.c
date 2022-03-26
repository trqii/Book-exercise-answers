#include <stdio.h>

int main(void)
{
	static double arr[5];
	int i;
	for (i = 0; i < 5; i++)
		printf("%.1f ", arr[i]);

	return 0;
}