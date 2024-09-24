/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:59:18 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/09 13:34:06 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	printf("%d", ft_str_is_printable("abcdefghijklmnopqrstuvxwz"));
	printf("\n%d", ft_str_is_printable("aBcDeFgHiJkLmNoPqRsTuVxWz"));
	printf("\n%d", ft_str_is_printable("ABCDEFGHIJKLMNOPQRSTUVXWZ"));
	printf("\n%d", ft_str_is_printable("1234567890abcdefgh"));
	printf("\n%d", ft_str_is_printable(""));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
*/
