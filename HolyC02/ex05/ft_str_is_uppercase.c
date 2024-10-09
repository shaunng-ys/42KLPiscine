/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 20:14:31 by sng               #+#    #+#             */
/*   Updated: 2024/10/08 20:38:19 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{	
	int i = 0;
	int temp0 = 2;
	int temp1;
	
	if(str[i] == '\0')
	{
		temp1 = 1;
		return temp1;
	}
	
	else
	{
		while(str[i] != '\0')
		{
			if(str[i] < 65 || str[i] > 90)
			{
				temp0 = 0;
			}	
			i++;
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
}

int	main(void)
{
	char a[] = "";
	char	*str_ptr = a;

	int b =	ft_str_is_uppercase(str_ptr);
	printf("%d", b);
}
