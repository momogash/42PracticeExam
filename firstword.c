/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 16:22:53 by momogash          #+#    #+#             */
/*   Updated: 2019/07/23 17:02:43 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
	int i;

	if (ac == 2)
	{
		i = 0;
		while	(av[1][i])
		{
			while	(av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n'|| av[1][i] == 'v' || av[1][i] == '\f')
				i++;
			while	((!(av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n' || av[1][i] == '\v' || av[1][i] == '\f')) && av[1][i]) 
			{
				write(1, &av[1][i], 1);
				i++;
			}
			//break;
		}
	}
	write(1, "\n", 1);
	return(0);
}
