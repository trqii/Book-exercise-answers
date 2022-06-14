#include <stdio.h>

int main(void)
{
	char ch;
	FILE* sfp;
	FILE* dfp;
	char sname[FILENAME_MAX];
	char dname[FILENAME_MAX];

	printf("打开原文件: ");   scanf("%s", sname);
	printf("打开目标文件: "); scanf("%s", dname);

	if ((sfp = fopen(sname, "rb")) == NULL)
		printf("\a原文件打开失败。\n");
	else {
		if ((dfp = fopen(dname, "wb")) == NULL)
			printf("\a目标文件打开失败。\n");
		else {
			while (fread(&ch, 1, 1, sfp))
				fwrite(&ch, 1, 1, dfp);
		}
	}

	return 0;
}