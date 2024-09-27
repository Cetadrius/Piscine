/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:50:11 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/18 13:50:13 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_repeat(char *c)
{
	int	i;
	int	j;
	int	h;
	char	up[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char	down[] = "abcdefghijklmnopqrstuvwxyz";
	
	j = 0;
	h = 0;
	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
		
			while (j <= 25)
			{
			
				if (down[j] == c[i])
				{
				
					while (h <= j)
					{
						write(1, &down[j], 1);
						h++;
					}
					h = 0;
					break;
				}
				j++;
			}
			j = 0;
			
		}
		else if (c[i] >= 'A' && c[i] <= 'Z')
		{
			while (j <= 25)
			{
				if (up[j] == c[i])
				{
					while (h <= j)
					{
						write(1, &up[j], 1);
						h++;
					}
					h = 0;
					break;
				}
				j++;
			}
			j = 0;
		}
		else
		{write(1, &c[i], 1);}
		i++;
	}
}

int	main(int argc, char **argv)
{
	
	if (argc == 2)
		ft_repeat(argv[1]);
	write(1, "\n", 1);
	return (0);
}
