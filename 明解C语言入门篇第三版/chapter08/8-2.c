#include <stdio.h>

#define max(x, y) (((x) > (y)) ? (x) : (y))

int main(void)
{
	int a = 1, b = 2, c = 3, d = 4;

	max(max(a, b), max(c, d));
	//((((((a) > (b)) ? (a) : (b))) > ((((c) > (d)) ? (c) : (d)))) ? ((((a) > (b)) ? (a) : (b))) : ((((c) > (d)) ? (c) : (d))));

	max(max(max(a, b), c), d);
	//(((((((((a) > (b)) ? (a) : (b))) > (c)) ? ((((a) > (b)) ? (a) : (b))) : (c))) > (d)) ? (((((((a) > (b)) ? (a) : (b))) > (c)) ? ((((a) > (b)) ? (a) : (b))) : (c))) : (d));

	return 0;
}