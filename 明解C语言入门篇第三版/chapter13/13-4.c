#include <stdio.h>

struct stu {
	char name[100];
	double height;
	double weight;
};

int main(void)
{
	FILE* fp;
	struct stu s[100];
	int i = 0;

	if ((fp = fopen("hw.dat", "w")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		puts("姓名  身高  体重");
		while (scanf("%s%lf%lf", s[i].name, &s[i].height, &s[i].weight) == 3) {
			fprintf(fp, "%-10s %5.1f %5.1f\n", s[i].name, s[i].height, s[i].weight);
			i++;
		}
		fclose(fp);
	}

	return 0;
}