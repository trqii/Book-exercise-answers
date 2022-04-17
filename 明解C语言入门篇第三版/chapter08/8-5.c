#include <stdio.h>

enum sex
{
	Male,
	Famale,
};

enum season
{
	Spring,
	Summer,
	Autumn,
	Winter
};

int main(void)
{
	enum sex s = Famale;

	if (s == Male)
		puts("it's Male.\n");
	else
		puts("it's Famale\n");

	enum sex ss = Spring;

	switch (ss)
	{
	case Spring: puts("it's spring."); break;
	case Summer: puts("it's summer."); break;
	case Autumn: puts("it's autumn."); break;
	case Winter: puts("it's winter."); break;
	}

	return 0;
}