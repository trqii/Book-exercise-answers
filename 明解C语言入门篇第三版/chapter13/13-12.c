#include <stdio.h>
#include <time.h>

char data_file[] = "datetime.dat";

void get_data(void)
{
	FILE* fp;

	if ((fp = fopen(data_file, "rb")) == NULL)
		printf("本程序第一次运行。\n");
	else {
		struct tm timer;

		fread(&timer, sizeof(struct tm), 1, fp);

		printf("上一次运行是在%d年%d月%d日%d时%d分%d秒",
			timer.tm_year + 1900, timer.tm_mon + 1, timer.tm_mday,
			timer.tm_hour, timer.tm_min, timer.tm_sec);

		fclose(fp);
	}
}

void put_data(void)
{
	FILE* fp;
	time_t current = time(NULL);
	struct tm* timer = localtime(&current);

	if ((fp = fopen(data_file, "wb")) == NULL)
		printf("\a文件打开失败。\n");
	else {
		fwrite(timer, sizeof(struct tm), 1, fp);

		fclose(fp);
	}
}

int main(void)
{
	get_data();

	put_data();

	return 0;
}