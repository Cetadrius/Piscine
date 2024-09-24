/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:24:07 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/09 19:24:32 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	p;

	p = 0;
	if (str[p] == '\0')
	{
		return (1);
	}
	while (str[p] != '\0')
	{
		if ((str[p] >= 'a' && str[p] <= 'z')
			|| (str[p] >= 'A' && str[p] <= 'Z'))
		{
			p++;
		}
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%d", ft_str_is_alpha("abcdefghijklmnopqrstuvxwz"));
	printf("\n%d", ft_str_is_alpha("abcde5fghijk7lmnopqrs9tuvxwz"));
	printf("\n%d", ft_str_is_alpha("1234567890abcdefgh"));
}
*/
