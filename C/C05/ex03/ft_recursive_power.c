/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:15:20 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/16 13:15:21 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	i;

	i = nb;
	if (power < 0)
	{
		return (0);
	}
	if (power == 0)
	{
		return (1);
	}
	while (power > 1)
	{
		return (nb * ft_recursive_power(nb, (power - 1)));
	}
	return (i);
}
/*#include <stdio.h>

int	main(void)
{
	printf("%d to the power of %d = %d.\n", -1, 5, ft_recursive_power(-1, 5));
	printf("%d to the power of %d = %d.\n", 0, 5, ft_recursive_power(0, 5));
	printf("%d to the power of %d = %d.\n", 1, 5, ft_recursive_power(1, 5));
}*/
