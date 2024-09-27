/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:54:06 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/24 14:54:08 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	shift;
	
	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			shift = argv[1][i];
			if ((argv[1][i] >= 65 && argv[1][i] <= 77) 
				|| (argv[1][i] >= 97 && argv[1][i] <= 109))
			{
					shift += 13;
					write(1, &shift, 1); 
			}
			else if ((argv[1][i] >= 78 && argv[1][i] <= 90) 
				|| (argv[1][i] >= 110 && argv[1][i] <= 122))
			{
					shift -= 13;
					write(1, &shift, 1); 
			}
			i++;
		}
		write(1, &argv[1][i], 1);	
	}
	write(1, "\n", 1);
	return (0);
}
