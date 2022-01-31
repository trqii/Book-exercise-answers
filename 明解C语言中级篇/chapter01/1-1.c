#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ans;

	srand(time(NULL));
	ans = rand() % 7;

	if (ans == 0)
		printf("大吉\n");
	else if (ans == 1)
		printf("中吉\n");
	else if (ans == 2)
		printf("小吉\n");
	else if (ans == 3)
		printf("吉\n");
	else if (ans == 4)
		printf("末吉\n");
	else if (ans == 5)
		printf("凶\n");
	else if (ans == 6)
		printf("大凶\n");

	return 0;
}