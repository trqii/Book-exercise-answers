#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ans;

	srand(time(NULL));
	ans = rand() % 11;

	if (ans <= 1)
		printf("大吉\n");
	else if (ans <= 3)
		printf("中吉\n");
	else if (ans <= 5)
		printf("小吉\n");
	else if (ans <= 7)
		printf("吉\n");
	else if (ans == 8)
		printf("末吉\n");
	else if (ans == 9)
		printf("凶\n");
	else if (ans == 10)
		printf("大凶\n");

	return 0;
}