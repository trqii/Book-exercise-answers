#include <stdio.h>

int main(void)
{
	double arr[10];
	int i;
	FILE* fp = fopen("hw.dat", "rb");

	if (fp == NULL)
		printf("\a文件打开失败。\n");
	else {
		fread(arr, sizeof(double), 10, fp);

		for (i = 0; i < 10; i++)
			printf("%f\n", arr[i]);

		fclose(fp);
	}

	return 0;
}