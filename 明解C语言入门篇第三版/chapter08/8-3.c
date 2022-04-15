#include <stdio.h>

#define swap(type, a, b) { type tmp = a; a = b; b = tmp; }

int main(void)
{
	int a = 5;
	int b = 10;

	swap(int, a, b);

	printf("a = %d\n", a);
	printf("b = %d\n", b);

	return 0;
}