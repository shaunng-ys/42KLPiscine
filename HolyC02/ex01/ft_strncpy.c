/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:30:22 by sng               #+#    #+#             */
/*   Updated: 2024/10/08 03:59:39 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while(i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}

int	main(void)
{
	char a[100] = "Zyzz lives forever";
	char b[100] = "In";
	
	char *str_ptr1 = a;
	char *str_ptr2 = b;

	ft_strncpy(str_ptr1, str_ptr2, 3);
	
	int i = 0;
	while(str_ptr1[i] != '\0')
	{
		write(1, &str_ptr1[i], 1);
		i++;
	}
	char nl = '\n';
	write(1, &nl, 1);
	return (0);
}	
