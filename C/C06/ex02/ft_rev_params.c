/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 19:09:43 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/16 19:09:45 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc;
	j = 0;
	while (i > 1)
	{
		j = 0;
		while (argv[i - 1][j] != '\0')
		{
			ft_putchar(argv[i - 1][j]);
			j++;
		}
		i--;
		write(1, "\n", 1);
	}
	return (0);
}
