/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:40:42 by sng               #+#    #+#             */
/*   Updated: 2024/10/09 18:46:49 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main()
{
	char	first_str[] = "g f ";
	char	second_str[] = "g f g";

	//Using strcmp()
	int	res = strcmp(first_str, second_str);

	printf("\nValue returned by strcmp() is: %d", res);
	return (0);
}
