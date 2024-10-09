#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int cntr = 0;
	unsigned int i = 0;
	while(src[cntr] != '\0')
	{
		cntr++;
	}

	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}

	if(cntr < n)
	{
		while(cntr < n)
		{
			dest[cntr] = '\0';
			cntr++;
		}
	}
	return dest;
}

int	main(void)
{
	char a[100] = "Zyzz lives forever";
	char b[100] = "Keanu";
	
	char *str_ptr1 = a;
	char *str_ptr2 = b;

	ft_strncpy(str_ptr1, str_ptr2, 3);
	
	int i = 0;
	int counter = 0;
	while(str_ptr1[i] != '\0')
	{
		write(1, &str_ptr1[i], 1);
		i++;
	}
	while(str_ptr1[counter] != '\0')
	{
		counter++;
	}
	int	post_cntr = counter;
	while(str_ptr1[post_cntr] == '\0')
	{
		post_cntr++;
	}
	printf("\n%d\n", counter);
	printf("%d\n", post_cntr);
	
	/*
	char nl = '\n';
	write(1, &nl, 1);
	*/
	return (0);
}	

