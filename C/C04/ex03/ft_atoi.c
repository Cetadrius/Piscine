/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 15:26:54 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/15 15:27:23 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	whitespaces(char *str, int *ptr_i)
{
	int	h;
	int	i;

	i = 0;
	h = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while ((str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			h *= -1;
		i++;
	}
	*ptr_i = i;
	return (h);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	rslt;
	int	i;

	rslt = 0;
	sign = whitespaces(str, &i);
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		rslt *= 10;
		rslt += str[i] - 48;
		i++;
	}
	rslt *= sign;
	return (rslt);
}
/*#include <stdio.h>

int	main(void)
{
	char *s = "";
	printf("%d", ft_atoi(s));
}*/
/*int	main(int argc, char **argv)
{
	while(argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
		return(0);
	}
}*/
