/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 12:12:08 by momogash          #+#    #+#             */
/*   Updated: 2019/09/02 17:01:01 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	convert(int n)
{
	if	(n >= 0 && n <= 9)
		return(n + 48);
	else if	(n >= 10 && n <= 15)
		return(n + 55);
	else
		return(0);
}

char	*ft_itoa_base(int value, int base)
{
	char *str;
	char *temp;
	int sign;
	int j;
	int i;

	sign = 1;
	j = 0;
	i = 0;

	str = (char *)malloc (sizeof(char) * 12);
	temp = (char *)malloc(sizeof(char) * 12);

	if	(value == 0)
		return("0");

	if	(value == -2147483648)
		return("-2147483648");

	if	(value < 0)
	{
		sign = -1;
		value = value * (-1);
	}

	while	(value > 0)
	{
		temp[i] = convert(value % base);
		value = value / base;
		i++;
	}
	temp[i] = '\0';

	if	(sign == -1 && base == 10)
	{
		str[0] = '-';
		j = 1;
	}
	i--;

	while	(i >= 0 )
	{
		str[j] = temp[i];
		j++;
		i--;
	}
	str[j] = '\0';
	return(str);
}

int main(void)
{
	char *str;
	int i;

	i = 0;

	str = ft_itoa_base(2147483647,16);
		printf("%s\n", str);

	return(0);
}
