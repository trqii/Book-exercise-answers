#include <stdio.h>

int main(void)
{
	FILE* fp;
	char arr[128];

	printf("请输入文件名 : "); scanf("%s", arr);

	fp = fopen(arr, "w");

	puts("文件内容以消除。");

	fclose(fp);

	return 0;
}