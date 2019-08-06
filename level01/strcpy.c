/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:02:32 by momogash          #+#    #+#             */
/*   Updated: 2019/07/29 16:31:46 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char*	ft_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return(ptr);
}

int main(void)
{
	char *s = "Mo";
	char *d = (char*)malloc(ft_strlen(s) * sizeof(char));
	printf("%s\n", ft_strcpy(d, s));
	return(0);
}
