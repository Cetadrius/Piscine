/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 10:26:43 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/09 10:39:16 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main()
{
	char src[] = "Orca";
	char dest[] = "Submarine";
	char dest1[] = "Submarine2";

	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n%s", strncpy(dest1, src, 2));
	printf("\n%s", ft_strncpy(dest, src, 4));
	printf("\n%s", strncpy(dest1, src, 4));
	printf("\n%s", ft_strncpy(dest, src, 7));
	printf("\n%s", strncpy(dest1, src, 7));
}
*/
