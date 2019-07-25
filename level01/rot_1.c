/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 11:42:16 by momogash          #+#    #+#             */
/*   Updated: 2019/07/23 14:50:03 by momogash         ###   ########.fr       */
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
		alphabet = 0;
		while	(av[1][i])
		{
			if	((av[1][i] >= 'A' && 'Y' >= av[1][i]) || (av[1][i] >= 'a' && 'y' >= av[1][i]))
			{
				alphabet = av[1][i] + 1;
				write(1, &alphabet, 1);
			}
			else if	((av[1][i] == 'z') || (av[1][i] == 'Z'))
			{
				alphabet = av[1][i] - 25;
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
