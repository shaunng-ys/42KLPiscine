/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:40:22 by sng               #+#    #+#             */
/*   Updated: 2024/10/08 21:34:51 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int i = 0;
	int	temp0 = 2;
	int	temp1;

	if(str[i] == '\0')
	{
		temp1 = 1;
		return temp1;
	}
	else
	{
		while(str[i] != '\0')
		{
			if(str[i] < 32 || str[i] == 127)
			{
				temp0 = 0;
			}
			i++;
		}
	}
	if(temp0 == 0)
	{
		return temp0;
	}
	else
	{
		temp1 = 1;
		return temp1;
	}
}

int	main(void)
{
	char cnt_prt;
	char str[] = {'a','b',4,'\0'};
	char *str_ptr = str;
	int a;
	a = ft_str_is_printable(str_ptr);
	printf("%d", a);
	return (0);
}
