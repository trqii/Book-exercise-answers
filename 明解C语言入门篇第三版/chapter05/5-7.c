#include <stdio.h>

#define NUMBER 80

int main(void)
{
	int i;
	int num;
	int tensu[NUMBER];

	printf("数据个数：");

	do {
		scanf("%d", &num);
		if (num < 1 || num > NUMBER)
			printf("\a请输入 1~%d 的数：", NUMBER);
	} while (num < 1 || num > NUMBER);

	for (i = 0; i < num; i++) {
		printf("%2d号：", i + 1);
		scanf("%d", &tensu[i]);
	}

	printf("{");
	for (i = 0; i < num - 1; i++)
		printf("%d, ", tensu[i]);
	printf("%d}\n", tensu[i]);

	return 0;
}