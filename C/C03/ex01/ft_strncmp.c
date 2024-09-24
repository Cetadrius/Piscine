/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:19:59 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/10 14:20:06 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] != '\0' && s2[i] != '\0' && i < (n - 1) && s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

//#include <stdio.h>
//#include <string.h>
/*int main(void)
{
    char    src[] = "Orca";
    char    dest[] = "Orca";
    char    dest2[] = "Beetroot";
    char    dest3[] = "Beetrootpurple";
    char    dest4[]= "A";
    printf("%d", ft_strncmp(src, dest, 6));
    printf("\n");
    printf("%d", ft_strncmp(src, dest2, 10));
    printf("\n");
    printf("%d", ft_strncmp(src, dest3, 5));
    printf("\n");
    printf("%d", ft_strncmp(src, dest4, 20));
    printf("\n");
}*/
