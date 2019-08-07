/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 08:29:24 by momogash          #+#    #+#             */
/*   Updated: 2019/08/07 09:05:21 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char *av[])
{
	if (ac == 4)
	{
		if	(av[2][0] == '+')
			printf("%d", (atoi(av[1]) + atoi(av[3])));
		if	(av[2][0] == '-')
			printf("%d", (atoi(av[1]) - atoi(av[3])));
		if	(av[2][0] == '*')
			printf("%d", (atoi(av[1]) * atoi(av[3])));
		if	(av[2][0] == '/')
			printf("%d", (atoi(av[1]) / atoi(av[3])));
		if	(av[2][0] == '%')
			printf("%d", (atoi(av[1]) % atoi(av[3])));
	}
	printf("\n");
	return(0);
}
