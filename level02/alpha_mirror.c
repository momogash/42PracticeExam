/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 08:23:42 by momogash          #+#    #+#             */
/*   Updated: 2019/07/25 09:17:30 by momogash         ###   ########.fr       */
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
			if	(av[1][i] >= 'A' && 'Z' >= av[1][i])
			{
				letter = 'Z' - av[1][i] + 'A';
				write(1, &letter, 1);
			}
			else if	(av[1][i] >= 'a' && 'z' >= av[1][i])
			{
				letter = 'z' - av[1][i] + 'a';
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
