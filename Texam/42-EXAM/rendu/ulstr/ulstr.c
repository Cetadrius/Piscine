/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 15:42:00 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/18 15:42:06 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_caseshift(char *str)
{
	int	i;
	char	c;
	
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i] - 32;
			write(1, &c, 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			c = str[i] + 32;
			write(1, &c, 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_caseshift(argv[1]);
	write (1, "\n", 1);
	return (0);
}
