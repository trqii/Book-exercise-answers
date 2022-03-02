//#include <stdio.h>
//
//int main(void)
//{
//	int i, j, len;
//
//	puts("生成直角在左上方的等腰直角三角形。");
//	printf("短边：");
//	scanf("%d", &len);
//
//	for (i = len; i >= 1; i--) {
//		for (j = 1; j <= i; j++)
//			printf("*");
//		printf("\n");
//	}
//
//	return 0;
//}

#include <stdio.h>

int main(void)
{
	int i, j, len;

	puts("生成直角在右上方的等腰直角三角形。");
	printf("短边：");
	scanf("%d", &len);

	for (i = len; i >= 1; i--) {
		for (j = 1; j <= len - i; j++)
			printf(" ");
		for (j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}