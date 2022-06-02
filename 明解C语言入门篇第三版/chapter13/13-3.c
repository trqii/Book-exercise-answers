#include <stdio.h>

struct stu {
	char name[100];
	double height;
	double weight;
};

void swap(struct stu* s1, struct stu* s2)
{
	struct stu temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void sort(struct stu s[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++)
			if (s[j].height > s[j + 1].height)
				swap(&s[j], &s[j + 1]);
	}
}

int main(void)
{
	FILE* fp;
	struct stu s[100];
	int ninzu = 0;
	int i = 0;
	double hsum = 0.0;
	double wsum = 0.0;

	if ((fp = fopen("hw.dat", "r")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		while (fscanf(fp, "%s%lf%lf", s[i].name, &s[i].height, &s[i].weight) == 3) {
			ninzu++;
			hsum += s[i].height;
			wsum += s[i].weight;
			i++;
		}

		sort(s, ninzu);

		puts("按身高排序。");
		for (i = 0; i < ninzu; i++)
			printf("%-10s %5.1f %5.1f\n", s[i].name, s[i].height, s[i].weight);

		printf("----------------------\n");
		printf("平均       %5.1f %5.1f\n", hsum / ninzu, wsum / ninzu);
		fclose(fp);
	}

	return 0;
}