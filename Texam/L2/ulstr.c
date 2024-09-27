/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:20:31 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/24 14:20:32 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	main(int argc, char **argv)
{
	int	i;
	char	letter;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			letter = argv[1][i];
			while (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				letter -= 32; 
			}
			while (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				letter += 32; 
			}
			write (1, letter, 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
