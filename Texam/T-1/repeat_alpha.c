/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 07:13:44 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/26 07:13:46 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_rep(char c)
{
	int	rep;
	
	if (c >= 'a' && c<= 'z')
	{
		rep = c -'a' +1;
	}
	else if (c >= 'A' && c<= 'Z')
	{
		rep = c -'A' +1;
	}
	else
		rep = 1;
	return (rep);
}
int	main(int argc, char **argv)
{
	int	rep;
	
	if (argc == 2)
	{
		while (*argv[1] != '\0')
		{
			rep = ft_rep(*argv[1]);
			while (rep--)
			{
				write(1, argv[1], 1);
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
