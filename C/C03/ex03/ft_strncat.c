/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 08:01:03 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/12 08:01:07 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	h;

	i = 0;
	h = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[h] != '\0' && h < nb)
	{
		dest[i + h] = src[h];
		h++;
	}
	dest[i + h] = '\0';
	return (dest);
}
