/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:16:30 by momogash          #+#    #+#             */
/*   Updated: 2019/09/04 16:39:10 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char *av[])
{
	char *str;
	int *ptr;
	int tab[4096];
	int i;

	i = 0;
	ptr = tab;

	if	(ac == 2)
	{
		str = av[1];
		while	(str[i])
		{
			if	(str[i] == '+')
				++(*ptr);
			else if	(str[i] == '-')
				--(*ptr);
			else if	(str[i] == '>')
				ptr++;
			else if	(str[i] == '<')
				ptr--;
			else if	(str[i] == '.')
				write(1, ptr, 1);
			else if	(str[i] == '[' && *ptr == 0)
			{
				loop = 1;
				while (loop != 0)
				{
					i++;
					if 	(str[i] == '[')
						loop++;
					if 	(str[i] == ']')
						loop--;
				}
				
			}
			else if	(str[i] == ']' && *ptr != 0)
			{
				loop = 1;
				while	(loop != 0)
				{
					i--;
					if	(str[i] == ']')
						loop++;
					if	(str[i] == '[')
						loop--;
				}
			}

			i++;
		}

	}
}
