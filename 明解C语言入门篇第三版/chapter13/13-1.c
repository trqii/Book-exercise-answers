#include <stdio.h>

int main(void)
{
	FILE* fp;
	char arr[128];

	printf("请输入文件名 : "); scanf("%s", arr);

	fp = fopen(arr, "r");

	if (fp == NULL)
		puts("该文件不存在。");
	else {
		puts("该文件存在。");
		fclose(fp);
	}

	return 0;
}