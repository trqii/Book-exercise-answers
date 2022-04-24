#include <stdio.h>

int main(void)
{
	char s[] = "ABC";
	int i = 0;

	while (s[i])
		s[i++] = '\0';
	
	printf("%s\n", s);

	return 0;
}