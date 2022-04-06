#include <stdio.h>
#include <math.h>

int main(void)
{
	double area;

	printf("请输入正方形的面积："); scanf("%lf", &area);

	printf("正方形的边长是：%f\n", sqrt(area));

	return 0;
}