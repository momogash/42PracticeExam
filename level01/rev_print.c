/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:12:24 by momogash          #+#    #+#             */
/*   Updated: 2019/07/22 12:09:23 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i; 

	i = 0;
	while	(str[i] != 0)
		i++;
	return(i);
}

int main(int ac, char *av[])
{
	int i;

	i = 0;
	if	(ac == 2)
	{
		i = ft_strlen(&av[1][i]) - 1;
		while	(i >= 0)
		{
			ft_putchar(av[1][i]);
			i--;
		}
	}
	ft_putchar('\n');
	return (0);
}
