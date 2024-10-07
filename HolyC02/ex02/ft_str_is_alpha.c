/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 04:01:19 by sng               #+#    #+#             */
/*   Updated: 2024/10/08 06:10:28 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int i = 0;
	int p;
	int z;
	
	if(str[i] == '\0')
	{
		p = 1;
		printf("%d", p);
		return p;
	}
	
	else
	{
		while(str[i] != '\0')
		{
			if(str[i] > 64 && str[i] < 91)
			{
				p = 1;
			}
			else if (str[i] > 96 && str[i] < 123)
			{
				p = 1;
			}
			else
			{
				z = 0;
			}
			i++;
		}
	}

	if(z == 0)
	{
		printf("%d", z);
		return z;
	}

	else
	{
		printf("%d", p);
		return p;
	}
}

int	main(void)
{
	char a[]= "";
	char *str_ptr = a;

	ft_str_is_alpha(a);
	return (0);
}
