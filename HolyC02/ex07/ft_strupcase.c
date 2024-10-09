/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:35:52 by sng               #+#    #+#             */
/*   Updated: 2024/10/08 21:49:42 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] > 96 && str[i] < 123)
		{
			str[i] = str[i] - 32;
		}
		else
		{
			break;
		}
		i++;
	}
	return str;
}

int	main(void)
{
	char	test_str[] = "hhfiduhiufhduihfui!FDF";
	char	*str_ptr = test_str;
	ft_strupcase(str_ptr);
	printf("%s", test_str);	
}
