#include <stdio.h>

void alert(int n)
{
	while (n--) {
		printf("\a");
	}
}

int main(void)
{
	int n1;

	printf("请输入一个整数：");
	scanf("%d", &n1);

	alert(n1);

	return 0;
}