#include <stdio.h>
#include <ctype.h>

int strtoi(const char* nptr)
{
	int num = 0;

	while (isdigit(*nptr))
		num = num * 10 + (*nptr++ - '0');

	return num;
}

long strtol(const char* nptr)
{
	long num = 0;

	while (isdigit(*nptr))
		num = num * 10 + (*nptr++ - '0');

	return num;
}

double strtof(const char* nptr)
{
	double num = 0.0;
	int count = 1;
	int t = 10;

	while ((isdigit(*nptr)) || (count && *nptr == '.')) {

		if (*nptr == '.') {
			count--;
			nptr++;
			continue;
		}

		if (count)
			num = num * 10 + (*nptr++ - '0');
		else {
			num = num + (double)(*nptr++ - '0') / t;
			t *= 10;
		}
	}

	return num;
}

int main(void)
{
	char str[128];

	printf("请输入字符串：");
	scanf("%s", str);
	printf("%d\n", strtoi(str));

	printf("请输入字符串：");
	scanf("%s", str);
	printf("%ld\n", strtol(str));

	printf("请输入字符串：");
	scanf("%s", str);
	printf("%f\n", strtof(str));

	return 0;
}