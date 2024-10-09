/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 00:26:56 by sng               #+#    #+#             */
/*   Updated: 2024/10/10 02:44:56 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0;
	unsigned int act = n - 1; //Because we start from 0 instead of 1
	int r;

	while(s1[i] == s2[i])
	{
		i++;
	}
	if(i < act)
	{
		r = s1[i] - s2[i];
	}
	else
	{
		r = s1[act] - s2[act];
	}
	return r;
}

int	main(void)
{
	char str_1[] = "Hfa";
	char str_2[] = "Ha";
	char *str_ptr1 = str_1;
	char *str_ptr2 = str_2;
	unsigned int nbr = 3;
	int diff;
	diff = ft_strncmp(str_ptr1, str_ptr2, nbr);
	printf("%d", diff);
	return (0);
}
