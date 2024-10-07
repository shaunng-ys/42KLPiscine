/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 05:21:44 by sng               #+#    #+#             */
/*   Updated: 2024/10/08 06:33:21 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int i = 0;
	int emp;
	int pm;
	int np;

	if(str[i] == '\0')
	{
		int emp = 1;
		printf("%d", emp);
	}
	else
	{
		while(str[i] != '\0')
		{		
			if(str[i] > 47 && str[i] < 58)
			{
				pm = 1;
			}
			else
			{
				np = 0;
			}
			i++;
		}
	}

	if(np == 0)
	{
		printf("%d", np);
		return np;
	}
	else
	{
		printf("%d", pm);
		return pm;
	}
}

int	main(void)
{	
	/*Not sure why the output is 10 when the string input is empty (seems to be related to line 47 thought*/
	char str[] = "";
	char *str_ptr = str;
	ft_str_is_numeric(str_ptr);
	return (0);
}
