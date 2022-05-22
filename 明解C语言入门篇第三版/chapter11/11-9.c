#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128];

	while (1) {
		printf("请输入密码："); scanf("%s", str);
		if (strlen(str) < 8) {
			puts("密码应该大于等于8位\n");
			continue;
		}

		if (strcmp(str, "12345678") == 0) {
			puts("密码正确");
			break;
		}
		else {
			puts("密码错误");
		}
	}

	return 0;
}