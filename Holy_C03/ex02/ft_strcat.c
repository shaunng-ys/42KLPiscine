/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 03:43:02 by sng               #+#    #+#             */
/*   Updated: 2024/10/10 04:18:03 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
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

	while(i < src_cntr)
	{
		dest[dest_cntr] = src[i];
		dest_cntr++;
		i++;
	}
	dest[dest_cntr] = '\0';
	return dest;
}

int	main(void)
{
	char str_1[100] = "Destiny";
	char str_2[] = "IsMisguided";
	char *str_ptr1 = str_1;
	char *str_ptr2 = str_2;

	ft_strcat(str_ptr1, str_ptr2);
	printf("%s", str_ptr1);
	return (0);
}
