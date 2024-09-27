/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:09:40 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/23 14:09:42 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char    *ft_strcpy(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	if (*s2 != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = s2[i];
	return (s1);
}
