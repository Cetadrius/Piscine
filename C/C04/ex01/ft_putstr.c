/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afilipe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 11:48:03 by afilipe-          #+#    #+#             */
/*   Updated: 2024/09/15 11:48:06 by afilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	p;

	p = 0;
	while (str[p] != '\0')
	{
		ft_putchar(str[p]);
		p++;
	}
}

/*int	main()
{
	ft_putstr("sgsuhgsih");
}
int	main(int argc, char **argv)
{
	while(argc == 2)
	{
		ft_putstr(argv[1]);
		return(0);
	}
	//write(1, "\0",1);
	
}*/
