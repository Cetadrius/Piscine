/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:38:15 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/09 14:00:06 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		if (str[p] >= 'a' && str[p] <= 'z')
		{
			str[p] -= 32;
		}
		p++;
	}
	return (str);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char str[] = "abcdefghjlmnopqrstuvxwz";
	printf("%s", ft_strupcase(str));
	str[p] -= ('a' - 'A'); // its another way of doing the same code
}
*/
