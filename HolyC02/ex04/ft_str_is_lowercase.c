/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 06:13:12 by sng               #+#    #+#             */
/*   Updated: 2024/10/08 20:13:36 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
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
			if(str[i] < 97 || str[i] > 122)
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
	char	test_str[] = "jdfjdhfdifdgiufgduFi";
	char	*str_ptr = test_str;

	int a = ft_str_is_lowercase(str_ptr);
	printf("%d", a);
	return (0);
}	
