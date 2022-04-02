#include <stdio.h>

int main(void)
{
	unsigned short x, y, z;

	x = 30000;
	y = 35536;
	z = x + y;

	printf("%hu\n", z);

	return 0;
}