/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 17:45:42 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/25 17:45:43 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_rep(char c)
{
	int	repeat;
	
	if (c >= 'a' && c <= 'z')
	{
		repeat = c - 'a' + 1;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		repeat = c - 'A' + 1;
	}
	else
	{
		repeat = 1;
	}
	return (repeat);
}

int	main(int argc, char **argv)
{
	int	repeat;
	
	if (argc == 2)
	{
		while (*argv[1] != '\0')
		{
			repeat = ft_rep(*argv[1]);
			while (repeat--)
			{
				write(1, argv[1], 1);
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
