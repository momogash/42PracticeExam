/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printbits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 09:40:35 by momogash          #+#    #+#             */
/*   Updated: 2019/08/06 16:26:32 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char nbr)
{
	int div;

	div = 128;
	while	(div)
	{
		if	(div <= nbr)
		{
			write(1, "1", 1);
			nbr = nbr % div;
		}
		else
			write(1, "0", 1);
		div = div / 2;
	}
}

int main(void)
{
	char number = 'B';
	char number1 = 'D';
	print_bits(number);
	write(1, "\n", 1);
	print_bits(number);
	write(1, "\n", 1);
	print_bits(number1);
}
