/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashaqeel <ashaqeel@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:34:31 by ashaqeel          #+#    #+#             */
/*   Updated: 2024/09/30 16:03:37 by sng              ###   ########.kl       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y);

void	rush(int x, int y)
{	
	int	letter2;
	letter2 = 2;

	//Condition for whole code not to run if x or y < 1
	if(x > 0 && y > 0)
	{
/*
 Code for the first line
 */
		//Display first slash
		ft_putchar('/');

		//Display subsequent asterisks if x > 2
		if (x > 2)
		{	
			while(letter2 < x)
			{		
				ft_putchar('*');

				letter2 = letter2 + 1;
				/*
				if(letter2 == x - 1)
				break;
				*/
			}
		}	
		
		//Display last backslash after asterisks
		if(x > 1)
		{	
			ft_putchar('\\');
		}

		//Move to newline
		ft_putchar('\n');
/*
 Code for middle line
*/ 
		
		int	num_row;
		num_row = 2;
		letter2 = 2;
		while(num_row < y)
		{	
			ft_putchar('*');
			/*
			Might be redundant code
			if(x > 1 && y > 1)
			*/
			{
				while(letter2 < x)
				{	
					ft_putchar(' ');
					letter2 = letter2 + 1;
					/*
					if(letter2 == x - 1)
					break;
					*/
				}
				ft_putchar('*');
			}	
			ft_putchar('\n');
			num_row = num_row + 1;
		}
/*		
 Code for the last line
*/
		if (y > 1)
		{	
		letter2 = 2;
		if(x >= 1 && y > 1)
		{
			ft_putchar('\\');
		}
	if(x > 1 && y > 1)
	{
		while(letter2 < x)
		{
			ft_putchar('*');
			letter2 = letter2 + 1;		}
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
	}
}	
