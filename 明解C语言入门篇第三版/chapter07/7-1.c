#include <stdio.h>

int main(void)
{
	unsigned n = 0;

	printf("%u\n", sizeof 1);
	printf("%u\n", sizeof + 1);
	printf("%u\n", sizeof - 1);

	printf("%u\n", sizeof(unsigned) - 1);
	printf("%u\n", sizeof(double) - 1);
	printf("%u\n", sizeof((double)-1));

	printf("%u\n", sizeof n + 2);
	printf("%u\n", sizeof(n + 2));
	printf("%u\n", sizeof(n + 2.0));

	return 0;
}