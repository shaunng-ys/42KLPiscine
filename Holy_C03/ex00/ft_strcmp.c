/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sng <sng@student.42kl.edu.my>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:39:35 by sng               #+#    #+#             */
/*   Updated: 2024/10/09 04:42:21 by sng               ###   ########kl       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while(s1[i] != '\0' || s2[i] != '\0')
	{
		if(s1[i] == s2[i])
		{
			break;
		}
		else
		{
				
		}
		i++;
	}
}

int	main(void)
{
	char	str_1[] = "These are the same.";
	char	str_2[] = "These are the same.";
	char	*str_ptr1 = str_1;
	char	*str_ptr2 = str_2;
	int r = ft_strcmp(str_ptr1, *str_ptr2);
	printf("%d", r);	
}
