/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeatalpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:56:21 by momogash          #+#    #+#             */
/*   Updated: 2019/07/29 17:30:28 by momogash         ###   ########.fr       */
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
		letter = 0;
		while	(av[1][i])
		{
			if	(av[1][i] >= 'A' && 'Z' >= av[1][i])
			{
				letter = av[1][i] - 64;
				while (letter--)
					write(1, &av[1][i], 1);
			}
			if	(av[1][i] >= 'a' && 'z' >= av[1][i])
			{
				letter = av[1][i] - 96;
			   while	(letter --)
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
