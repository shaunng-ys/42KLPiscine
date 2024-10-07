/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:57:27 by sng               #+#    #+#             */
/*   Updated: 2024/10/08 00:10:34 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while(src[i] != dest[i])
	{
		dest[i] = src[i];
		i++;
	}	
	return dest;	
}

int	main(void)
{
	char a[100] = "Name a fact";
	char b[100] = "Keanu Reeves is better than 99.9\% of the population";
	char *str_ptr1 = a;
	char *str_ptr2 = b;
	
	ft_strcpy(str_ptr1, str_ptr2);
	int i = 0;
	while(str_ptr1[i] != '\0')
	{
		write(1, &str_ptr1[i], 1);
		i++;
	}
	return (0);
}
