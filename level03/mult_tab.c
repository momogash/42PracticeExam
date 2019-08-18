/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mult_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 10:12:21 by momogash          #+#    #+#             */
/*   Updated: 2019/08/15 11:03:23 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *s)
{
	int ret;
	int i;

	i = 0;
	while	(s[i] != '\0' && (s[i] >= '0' && '9' >= s[i]))
	{
		ret = ret * 10 + s[i] - '0';
		i++;
	}
	return(ret);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nbr)
{
	if	(nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putchar(nbr % 10 + '0');
	}
	else
		ft_putchar('0' + nbr);
}

void ft_multi_tab(int nbr)
{
	int i;

	i = 1;
	while (i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(nbr);
		write(1, " = ", 1);
		ft_putnbr(i * nbr);
		ft_putchar('\n');
		i++;
	}
}

int main(int ac, char *av[])
{
	if	(ac == 2)
		ft_multi_tab(ft_atoi(av[1]));
	ft_putchar('\n');
	return(0);
}
