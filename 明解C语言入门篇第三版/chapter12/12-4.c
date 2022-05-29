#include <stdio.h>
#include <string.h>

#define NUMBER   5
#define NAME_LEN 64

typedef struct {
	char name[NAME_LEN];
	int height;
	float weight;
	long schols;
}Student;

void swap_Student(Student* x, Student* y)
{
	Student temp = *x;
	*x = *y;
	*y = temp;
}

void sort_by_height(Student a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++)
			if (a[j].height > a[j + 1].height)
				swap_Student(&a[j], &a[j + 1]);
	}
}

void sort_by_name(Student a[], int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++)
			if (strcmp(a[j].name, a[j + 1].name) > 0)
				swap_Student(&a[j], &a[j + 1]);
	}
}

int main(void)
{
	int i;
	int input;
	Student std[NUMBER];

	for (i = 0; i < NUMBER; i++) {
		printf("%d号（%d）\n", i + 1, NUMBER);
		printf("请输入姓名：");   scanf("%s", std[i].name);
		printf("请输入身高：");   scanf("%d", &std[i].height);
		printf("请输入体重：");   scanf("%f", &std[i].weight);
		printf("请输入奖学金："); scanf("%ld", &std[i].schols);
	}

	printf("请选择按身高还是姓名排序（0/1）\n");
	scanf("%d", &input);

	if (input) {
		sort_by_name(std, NUMBER);
		puts("\n按姓名排序。");
	}
	else {
		sort_by_height(std, NUMBER);
		puts("\n按身高排序。");
	}


	for (i = 0; i < NUMBER; i++)
		printf("%-8s %6d%6.1f%7ld\n",
			std[i].name, std[i].height, std[i].weight, std[i].schols);

	return 0;
}