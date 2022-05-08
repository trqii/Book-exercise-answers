#include <stdio.h>

int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int is_leap_year(int y)
{
	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
}


void decrement_date(int* y, int* m, int* d)
{
	if (*d > 1)
		*d -= 1;
	else if (is_leap_year(*y) && *m == 3) { // 3月1日
		*d = 29;
		*m -= 1;
	}
	else if (*m == 1) { // 1月1日
		*m = 12;
		*d = 31;
		*y -= 1;
	}
	else {
		*m -= 1;
		*d = month[*m - 1];
	}
}

void increment_date(int* y, int* m, int* d)
{

	if (*m == 12 && *d == 31) { // 12月31日
		*y += 1;
		*m = 1;
		*d = 1;
	}
	else if (is_leap_year(*y) && *m == 2 && *d == month[*m - 1] + 1) { // 2月29日
		*m += 1;
		*d = 1;
	}
	else if (is_leap_year(*y) && *m == 2) {
		*d += 1;
	}
	else if (*d == month[*m - 1]) {
		*m += 1;
		*d = 1;
	}
	else
		*d += 1;
}

int main(void)
{
	int y, m, d;

	printf("请输入一个日期："); scanf("%d%d%d", &y, &m, &d);

	decrement_date(&y, &m, &d);
	printf("前一天：%d %d %d\n", y, m, d);

	increment_date(&y, &m, &d);
	increment_date(&y, &m, &d);
	printf("后一天：%d %d %d\n", y, m, d);

	return 0;
}