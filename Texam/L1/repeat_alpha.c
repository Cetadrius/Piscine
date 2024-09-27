/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:54:28 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/23 14:54:30 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	repeating (char *c)
{
	int	repeat;
	
	if (c >= 'A' && c<= 'Z')
	{
		repeat = c - 'A' + 1;
	}
	else if (c >= 'a' && c<= 'a')
	{
		repeat = c - 'a' + 1;
	}
	else
	{
		repeat = 1;
	}
	return (repeat);
}

int	main(int argc, char **argv)
{
	int	i;
	
	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = repeating(*argv[1]);
			while (repeat--)
			{
				write(1, argv[1], 1)
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1)
}
