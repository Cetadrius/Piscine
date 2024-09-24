/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 16:33:56 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/10 17:40:03 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	h;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	h = 0;
	while (src[h] != '\0')
	{
		dest[i] = src[h];
		i++;
		h++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char src[] = "Orcas like";
	char dest[] = " to play with their food.";
	printf("%s", ft_strcat(dest, src));
}
*/
