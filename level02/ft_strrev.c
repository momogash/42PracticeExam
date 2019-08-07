/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 09:50:03 by momogash          #+#    #+#             */
/*   Updated: 2019/08/07 11:56:17 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str1)
{
	int i;
	i = 0;
	while	(str1[i] != '\0')
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	int i;
	char *copy;

	i = 0;
	copy = (char*)malloc(ft_strlen(src) * sizeof(char));
	while	(src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return(copy);
}
char    *ft_strrev(char *str)
{
	int i;
	int len;
	char hold;

	i = 0;
	len = ft_strlen(str) - 1;
	while	(len > i)
	{
		hold = str[i];
		str[i] = str[len];
		str[len] = hold;
		len--;
		i++;
	}
	return(str);
}

int main(void)
{
	char *s = ft_strdup("12345");

	printf("%s\n", ft_strrev(s));

	return(0);
}
