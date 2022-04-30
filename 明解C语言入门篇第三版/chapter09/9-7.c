#include <stdio.h>

void put_stringn(const char s[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%s", s);
}

int main(void)
{
	char s[100];
	int n;

	printf("请输入一个字符串："); scanf("%s", s); 
	printf("请输入显示的次数："); scanf("%d", &n);

	put_stringn(s, n);
	printf("。\n");

	return 0;
}