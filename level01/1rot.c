/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1rot.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 18:24:09 by momogash          #+#    #+#             */
/*   Updated: 2019/07/29 18:30:56 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
	int i;
	int letter;

	i = 0;
	if	(ac == 2)
	{
		while	(av[1][i])
		{
			letter = 0;
			if	((av[1][i] >= 'A' && 'Y' >= av[1][i]) || (av[1][i] >= 'a' && 'y' >= av[1][i]))
			{
				letter = av[1][i] + 1;
				write(1, &letter, 1);
			}
			else if	((av[1][i] == 'Z')|| (av[1][i] == 'z'))
			{
				letter = av[1][i] - 25;
				write(1, &letter, 1);
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
