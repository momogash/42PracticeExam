/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 14:24:36 by momogash          #+#    #+#             */
/*   Updated: 2019/07/24 16:38:21 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while	(s1[i] != '\0' && (s1[i] == s2[i]))
		i++;

	return(s1 - s2);
}

int main(void)
{
	int result;
	char *a = "Hello";
	char *b = "hello";

	result = ft_strcmp(a, b);
	printf("%d",result);
	return(0);
}
