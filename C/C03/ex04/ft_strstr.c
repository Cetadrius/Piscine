/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 09:26:33 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/12 09:26:37 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[i] == '\0')
		return (str);
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] == to_find[j])
			{
				while (str[i + j] == to_find[j] && str[i + j] != '\0')
				{
					j++;
					if (to_find[j] == '\0')
						return (str + i);
				}
				j = 0;
			}
			i++;
		}
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "This string only starts after piscine, understand?";
	char	find[] = "piscine";
	
	printf("%s", str);
	printf("\n");
	printf("%s", ft_strstr(str, find));
}*/
