/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 21:55:17 by sng               #+#    #+#             */
/*   Updated: 2024/10/10 00:22:33 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	int	r;

	while(s1[i] == s2[i])
	{	
		i++;
	}

	r = s1[i] - s2[i];
	return r;	
}

int	main(void)
{
	char str_1[] = "Hellz";
	char str_2[] = "Hell";
	char *str_ptr1 = str_1;
	char *str_ptr2 = str_2;
	int a;
	a = ft_strcmp(str_ptr1, str_ptr2);
	printf("%d", a);
	return (0);
}
