/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:38:15 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/23 16:38:17 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_nb(int nb)
{
	if (nb > 9)
	{
		ft_write_nb(nb / 10);
	}
	write(1, &"0123456789"[nb % 10], 1);
}

void	main(int nb)
{
	while (nb <= 100)
	{	
		if ((nb % 3 == 0) && (nb % 5 == 0))
		{
			write(1, "fizzbuzz", 8);
		}
		else if (nb % 3 == 0)
		{
			write(1, "fizz", 4);
		}
		else if (nb % 5 == 0)
		{
			write(1, "buzz", 4);
		}
		else
		{
			ft_write_nb(nb)
		}
		write(1, "\n", 1);
		nb++:
	}
}
