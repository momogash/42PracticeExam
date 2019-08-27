/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotstring.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/26 11:57:09 by momogash          #+#    #+#             */
/*   Updated: 2019/08/26 13:04:19 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	rotstring(char *str)
{
	int i;
	int truefalse;

	i = 0;
	truefalse = 0;
	while (str[i] != '\0')
	{
		while (ft_isspace(str[i]) == 1 && str[i] != '\0')
			i++; // if there is space, skip over the space
		if (str[i] != '\0') // other loops are not necessary if at end of str
		{
			if (truefalse == 0)// if this is the first word it will evalutate to true
			{
				while (ft_isspace(str[i]) == 0 && str[i] != '\0')
					i++; // if there no space, means its characters go over the word
				truefalse = 1; // skips word sets true to 1
			}
			else
			{
				while (ft_isspace(str[i]) == 0 && str[i] != '\0')
				{
				write(1, &str[i], 1);
				i++; // if not first word write substequent words
				}
			write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (ft_isspace(str[i]) == 1 && str[i] != '\0')
		i++;
	while (ft_isspace(str[i]) == 0 && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
//
int		main(int argc, char **argv)
{
	if (argc == 2)
		rotstring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
