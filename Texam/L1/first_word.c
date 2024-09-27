/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:20:07 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/23 16:20:08 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] < 32 || argv[1][i] == 127)
		{
			i++;
		}
		while (argv[1][i] != '\0' && (argv[1][i] >= 32 || argv[1][i] < 127))
		{
			write(1, argv[1][i], 1);
			i++
		}
	}
	write(1, "\n", 1);
	return (0),
}
