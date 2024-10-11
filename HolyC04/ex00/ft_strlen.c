/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 05:02:01 by sng               #+#    #+#             */
/*   Updated: 2024/10/10 05:07:15 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}

int	main(void)
{
	char str_1[] = "What's the length of this?";
	char *str_ptr1 = str_1;
	int l;
	l = ft_strlen(str_ptr1);
	printf("%d", l);
	return (0);
}
