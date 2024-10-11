/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 05:13:33 by sng               #+#    #+#             */
/*   Updated: 2024/10/11 01:42:36 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int i = 0;
	char nbr_str[20];
	
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
	while(nbr_str[cntr] != '\0')
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
	int a = 42;
	ft_putnbr(a);
	return (0);
}
