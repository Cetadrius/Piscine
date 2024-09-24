/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:54:54 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/09 12:58:46 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
	printf("%d", ft_str_is_uppercase("abcdefghijklmnopqrstuvxwz"));
	printf("\n%d", ft_str_is_uppercase("aBcDeFgHiJkLmNoPqRsTuVxWz"));
	printf("\n%d", ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVXWZ"));
	printf("\n%d", ft_str_is_uppercase("1234567890abcdefgh"));
	printf("\n%d", ft_str_is_uppercase(""));
}
*/
