/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 10:37:09 by momogash          #+#    #+#             */
/*   Updated: 2019/07/24 14:23:52 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int i;
	int results;
	int sign;

	i = 0;
	results = 0;
	sign = 1;
	if	(str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while	(str[i] != '\0' && str[i] >= '0' && str[i] <= '9') 
	{
		results  = results * 10 + str[i] - '0';
		i++;
	}
	return(results * sign);
}

int main(void)
{
	char *a = "Mosa";
	int x;

	x = ft_atoi(a);
	printf("interger value of the string is: %d", x);
	return(0);
}
