#include <stdio.h>

struct xyz {
	int i;
	long l;
	double d;
};

struct xyz scan_xyz()
{
	struct xyz temp;

	printf("请输入一个整数：");   scanf("%d", &temp.i);
	printf("请输入一个长整形："); scanf("%ld", &temp.l);
	printf("请输入一个实数：");   scanf("%lf", &temp.d);

	return temp;
}

int main(void)
{
	struct xyz x = scan_xyz();

	printf("整数：");   printf("%d\n", x.i);
	printf("长整数："); printf("%ld\n", x.l);
	printf("实数：");   printf("%f\n", x.d);

	return 0;
}