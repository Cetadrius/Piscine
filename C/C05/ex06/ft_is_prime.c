/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:55:49 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/16 14:55:50 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i <= (nb / 2))
	{
		if (!(nb % i))
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
/*#include <stdio.h>

int	main(void)
{
	printf("0 = not prime number | 1 = prime number\n");
	printf("Is %d a prime number? %d\n", -15, ft_is_prime(-15));
	printf("Is %d a prime number? %d\n", 0, ft_is_prime(0));
	printf("Is %d a prime number? %d\n", 1, ft_is_prime(1));
	printf("Is %d a prime number? %d\n", 3, ft_is_prime(3));
	printf("Is %d a prime number? %d\n", 13, ft_is_prime(13));
	printf("Is %d a prime number? %d\n", 223, ft_is_prime(223));
	printf("Is %d a prime number? %d\n", 59451, ft_is_prime(45625));
}*/
