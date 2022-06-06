#include <stdio.h>

int main(void)
{
	int ch;
	int count = 0;
	FILE* fp;
	char fname[FILENAME_MAX];

	printf("请输入文件名 : "); scanf("%s", fname);

	if ((fp = fopen(fname, "r")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		while ((ch = fgetc(fp)) != EOF)
			count++;

		printf("文件一共%d个字符。\n", count);
		fclose(fp);
	}

	return 0;
}