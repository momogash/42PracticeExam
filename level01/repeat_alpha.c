/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 10:37:58 by momogash          #+#    #+#             */
/*   Updated: 2019/07/22 14:27:14 by momogash         ###   ########.fr       */
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
		while(av[1][i])
		{
			letter = 0;
			if	(av[1][i] >= 'A' && 'Z' >=  av[1][i])
			{
				letter = av[1][i] - 64;
				while(letter--)
					write(1, &av[1][i], 1);
			}
			else if	(av[1][i] >= 'a' && 'z' >= av[1][i])
			{
				letter = av[1][i] - 96;
				while(letter --)
				write(1, &av[1][i], 1);
			}
			else
				write(1, &av[1][i], 1);
					i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
