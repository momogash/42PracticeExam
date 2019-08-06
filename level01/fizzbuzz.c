/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 14:11:18 by momogash          #+#    #+#             */
/*   Updated: 2019/07/29 15:00:38 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;
	i = 0;
	while	(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	if	(nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-1*nbr);
	}
	else if	(nbr > 9)
	{
		if	(nbr / 10)
			ft_putnbr(nbr / 10);
		ft_putchar( 48 + (nbr % 10));
	}
	else
		ft_putchar(48 + nbr);
}

int	main(void)
{
	int x;
	char *a = "fizz";
	char *b = "buzz";
	char *c = "fizzbuzz";
	 x = 1;
	 while (x <= 100)
	 {
		 if	(x % 3 == 0)
		 {
			 if	(x % 5 == 0)
				 ft_putstr(c);
			 else
				 ft_putstr(a);
		 }
		 else if	(x % 5 == 0)
			 ft_putstr(b);
		 else
			 ft_putnbr(x);
		 ft_putchar('\n');
		 x++;
	 }
	return(0);
}

