/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 04:20:12 by sng               #+#    #+#             */
/*   Updated: 2024/10/10 04:39:19 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int i = 0;
	int dest_cntr = 0;
	int src_cntr = 0;
	
	while(dest[dest_cntr] != '\0')
	{
		dest_cntr++;
	}
	while(src[src_cntr] != '\0')
	{
		src_cntr++;
	}
	if(src_cntr < nb)
	{
		while(i < src_cntr)
		{
			dest[dest_cntr] = src[i];
			dest_cntr++;
			i++;
		}
	}
	else
	{
		while(i < nb)
		{
			dest[dest_cntr] = src[i];
			dest_cntr++;
			i++;
		}
		
	}	
	dest[dest_cntr] = '\0';
	return dest;
}

int	main(void)
{
	char str_1[] = "Test";
	char str_2[] = "123456789";
	char *str_ptr1 = str_1;
	char *str_ptr2 = str_2;
	unsigned int hm = 123;
	ft_strncat(str_ptr1, str_ptr2, hm);
	printf("%s", str_ptr1);
	return (0);
}
