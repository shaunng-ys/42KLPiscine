/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 14:49:24 by sng               #+#    #+#             */
/*   Updated: 2024/09/29 18:18:36 by sng              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y);

void	rush(int x, int y)
{	
	int	letter2;
	letter2 = 1;
if(x >= 1 && y >= 1)
{
	ft_putchar('/');
	while(letter2 < x)
	{	
		ft_putchar('*');

		letter2 = letter2 + 1;
		if(letter2 == x - 1)
		break;
	}
	if(x >= 2)
	{	
		ft_putchar('\\');
	}
	ft_putchar('\n');
	int	num_row;
	num_row = 2;
	letter2 = 1;
	while(num_row < y)
	{	
		ft_putchar('*');
		if(x > 1 && y > 1)
		{
			while(letter2 < x)
			{	
				ft_putchar(' ');
				letter2 = letter2 + 1; if(letter2 == x - 1)
				break;
			}
		
			letter2 = 1;
			
			ft_putchar('*');
		}	
		ft_putchar('\n');
		num_row = num_row + 1;
	}
	letter2 = 1;
	if(x >= 1 && y > 1)
	{
		ft_putchar('\\');
	}
if(x > 1 && y > 1)
{
	while(letter2 < x)
	{
		ft_putchar('*');
		letter2 = letter2 + 1;
		if(letter2 == x - 1)
		break;
	}
}
	if(x > 1 && y > 1)
	{
		ft_putchar('/');
	}
	if(y > 1)
	{
		ft_putchar('\n');
	}	
}
}
