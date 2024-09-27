/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:06:22 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/23 10:06:24 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//fazer a contagem dependendo da letra
int	letter_count(char c)
{
	int	repeat;
	
	if (c >= 'A' && c <= 'Z')
	{
		repeat = c - 'A' + 1;
	}
	else if (c >= 'a' && c <= 'z')
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
	int	repeat;
	
	if (argc == 2)
	{
		while(*argv[1])
		{
			repeat = letter_count(*argv[1]);
			while (repeat--)
			{
				write(1, argv[1], 1);
			}
			argv[1]++;
		}
	}
	ft_putchar('\n');
}
