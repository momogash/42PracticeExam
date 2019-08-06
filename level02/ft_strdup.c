/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 09:18:21 by momogash          #+#    #+#             */
/*   Updated: 2019/07/25 09:28:38 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while	(str[i] != '\0')
		i++;
	return(i);
}

char *ft_strdup(char *src)
{
	char *dest;
	char *p;

	dest = (char*)malloc(sizeof(char) *ft_strlen(src) + 1);
	p = dest;
	while(*src != '\0')
	{
		*p = *src;
		src++;
		p++;
	}
	*p = '\0';
	return(dest);
}

int main(void)
{
	char *s = "Girl code";
	char *b;

	b = ft_strdup(s);
	printf("%s", b);
	return(0);
}
