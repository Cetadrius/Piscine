/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:57:47 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/11 12:08:02 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	if (str[0] <= 'z' && str[0] >= 'a')
		str[0] -= 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' )
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				{
					if (!(str[i - 1] <= '9' && str[i - 1] >= '0'))
					{
						str[i] -= 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "just 17 more days, you will survive! you fat ugly hummie git!";
	char str1[] = "fshgg@ge$s~gj,u[io{er}h,ioi]rb^regj$t@";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));
	return 0;
}*/
