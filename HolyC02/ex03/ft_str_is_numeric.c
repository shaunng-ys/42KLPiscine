/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 05:21:44 by sng               #+#    #+#             */
/*   Updated: 2024/10/08 19:49:42 by sng               ###   ########kl       */
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
		return emp;
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
		return np;
	}
	else
	{
		return pm;
	}
}

int	main(void)
{	
	/*Not sure why the output is 10 when the string input is empty (seems to be related to line 47 thought*/
	char str[] = "dfdsfd25";
	char *str_ptr = str;
	int a = ft_str_is_numeric(str_ptr);
	printf("%d", a);
	return (0);
}
