/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:27:48 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/16 13:27:50 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci (index - 2) + ft_fibonacci (index -1));
}
/*#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_fibonacci(-1));
	printf("%i\n", ft_fibonacci(0));
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(3));
	printf("%i\n", ft_fibonacci(5));
	printf("%i\n", ft_fibonacci(7));
}
*/
