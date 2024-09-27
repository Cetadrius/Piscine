/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:11:02 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/23 18:11:05 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	j;
	int	sig;
	
	i = 0;
	j = 0;
	sig = 1;	
	while (str[i] != '\0')
	{
		if (str[i] >= 43 && str[i] <= 57 && (str[i] != 44 && str[i] != 46 && str[i] != 47))
		{
			if (str[i] == 45 || str[i] == 43)
			{
				if (str[i] == 45)
				{
					sig *= -1;
				}
			}
			else
			{
				j *= 10;
				j += str[i] -48;
			}
			if (!(str[i + 1] >= 48 && str[i + 1] <= 57))
			{
					break;
			}
		}
		i++;
	}
	j = j* sig;
	return(j);
}

int main(void){
	printf("%d\n%d\n", ft_atoi("-12345+TRAA"), atoi("-12345+TRAA"));
}
