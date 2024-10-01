#include <unistd.h>

int main(void)
{
	char a;
	a = 'a';

	char *ptr;
	ptr = &a;
	write(1, ptr, 1);
	return (0);
}
