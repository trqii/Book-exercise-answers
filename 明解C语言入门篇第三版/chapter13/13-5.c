#include <stdio.h>
#include <time.h>

char data_file[] = "datetime.dat";

void get_data(void)
{
	FILE* fp;

	if ((fp = fopen(data_file, "r")) == NULL)
		printf("本程序第一次运行。\n");
	else {
		int year, month, day, h, m, s;
		char arr[128];

		fscanf(fp, "%d%d%d%d%d%d%s", &year, &month, &day, &h, &m, &s, arr);
		printf("上一次运行是在%d年%d月%d日%d时%d分%d秒, %s\n",
			year, month, day, h, m, s, arr);
		fclose(fp);
	}
}

void put_data(void)
{
	FILE* fp;
	time_t current = time(NULL);
	struct tm* timer = localtime(&current);
	char arr[120];

	if ((fp = fopen(data_file, "w")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		fprintf(fp, "%d %d %d %d %d %d",
			timer->tm_year + 1900, timer->tm_mon + 1, timer->tm_mday,
			timer->tm_hour, timer->tm_min, timer->tm_sec);
		printf("当前的心情："); scanf("%s", arr);
		fprintf(fp, "心情%s\n", arr);
		fclose(fp);
	}
}

int main(void)
{
	get_data();

	put_data();

	return 0;
}