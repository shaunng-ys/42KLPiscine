#include <stdio.h>

int	main(void)
{
	char a[100] = "Hello";
	char b[100] = "Bye";

	int i = 0;

	while (a[i] != '\0')
	{
		a[i] = b[i];

		i++;
	}
	printf("%s, %s", a, b);
	return (0);
}
