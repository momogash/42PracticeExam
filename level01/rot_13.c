/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 14:30:05 by momogash          #+#    #+#             */
/*   Updated: 2019/07/23 11:32:06 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char *av[])
{
	int i;
	int alphabet;

	i = 0;
	if	(ac == 2)
	{
		while	(av[1][i])
		{
			alphabet = 0;
			if	((av[1][i] >= 'A' && 'M' >= av[1][i]) || (av[1][i] >= 'a' && 'm' >= av[1][i]))
			{
				alphabet = av[1][i] + 13;
				write(1, &alphabet, 1);
			}
			else if	((av[1][i] >= 'N' && 'Z' >= av[1][i]) || (av[1][i] >= 'n' && 'z' >= av[1][i]))
			{
				alphabet = av[1][i] - 13;
				write(1, &alphabet, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
