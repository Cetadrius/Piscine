/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:47:17 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/09 12:54:11 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%d", ft_str_is_lowercase("abcdefghijklmnopqrstuvxwz"));
	printf("\n%d", ft_str_is_lowercase("aBcDeFgHiJkLmNoPqRsTuVxWz"));
	printf("\n%d", ft_str_is_lowercase("1234567890abcdefgh"));
	printf("\n%d", ft_str_is_lowercase(""));
}
*/
