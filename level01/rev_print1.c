/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:17:13 by momogash          #+#    #+#             */
/*   Updated: 2019/09/13 13:25:42 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

void rev_print(char *str)
{
	if	(!*str)
		return;
	rev_print(str + 1);
	write(1, str, 1);
}

int main(int ac, char *av[])
{
	if	(ac == 2)
		rev_print(av[1]);
	 write(1, "\n", 1);
	 return(0);
}
