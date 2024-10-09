
#include <unistd.h>

char demo_funct(char a)
{
	return a;
}

int	main(void)
{
	char d = 'a';
	char b;
	b = demo_funct(d);

	write(1, &b, 1);
	return (0);
}
