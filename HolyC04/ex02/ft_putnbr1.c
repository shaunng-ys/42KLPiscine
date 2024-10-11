#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int i = 0;
	char nbr_str[20];
	int ref_nbr;

	if(nb < 0)
	{
		ref_nbr = nb;
		nb = nb * -1;
	}
	if(nb > -1)	
	{	if(nb > 9)
		{	
			while(nb > 9)
			{	
				char temp_n = (nb % 10) + 48;
				nbr_str[i] = temp_n;
				i++;
				nb = nb/10;
			}
		}
		if(nb < 10)
		{	
			char temp_s = nb + 48;
			nbr_str[i] = temp_s;
		}
	}

	int int_ind = 0;
	int cntr = 0;
	int nbr = 0;

	while(nbr_str[cntr] != '\0')
	{
		cntr++;
	}
	cntr = cntr - 1;
	if(ref_nbr < 0)
	{
		write(1, "-", 1);
	}	
	while(nbr_str[int_ind] != '\0')
	{	
		write(1, &nbr_str[cntr], 1);
		int_ind++;
		cntr--;
	}

	/*
	else
	{
	*/	
}		

int	main(void)
{
	//Don't know why I can't write out the min integer value with my function but I can for 1 less
	int a = -2147483647;
	ft_putnbr(a);
	int b = -2147483648;
	printf("\n%d",b); 
	return (0);
}

