#include <stdio.h>

void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void sort3(int* n1, int* n2, int* n3)
{
	if (*n1 > *n2)
		swap(n1, n2);
	if (*n1 > *n3)
		swap(n1, n3);
	if (*n2 > *n3)
		swap(n2, n3);
}

int main(void)
{
	int n1, n2, n3;

	puts("请输入三个整数。");
	printf("第一个："); scanf("%d", &n1);
	printf("第二个："); scanf("%d", &n2);
	printf("第三个："); scanf("%d", &n3);

	sort3(&n1, &n2, &n3);

	puts("升序排列");
	printf("%d %d %d\n", n1, n2, n3);

	return 0;
}