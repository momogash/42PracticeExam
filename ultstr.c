/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ultstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 15:03:22 by momogash          #+#    #+#             */
/*   Updated: 2019/07/23 15:52:24 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
			if	((av[1][i] >= 'A') && ('Z' >= av[1][i]))
			{
				alphabet = av[1][i] + 32;
				write(1, &alphabet, 1);
			}
			else if	((av[1][i] >= 'a') && ('z' >= av[1][i]))
			{
				alphabet = av[1][i] - 32;
				write(1, &alphabet, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
