/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 21:52:23 by sng               #+#    #+#             */
/*   Updated: 2024/10/08 22:00:43 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		if(str[i] > 64 && str[i] < 91)
		{
			str[i] = str[i] + 32;
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
	char	test_str[] = "HFODHOFIHOIFGOIG!sfdighj";
	char	*str_ptr = test_str;
	ft_strlowcase(str_ptr);
	printf("%s", test_str);
}
