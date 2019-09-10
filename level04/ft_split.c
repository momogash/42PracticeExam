/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 12:18:46 by momogash          #+#    #+#             */
/*   Updated: 2019/09/10 13:39:12 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char    **ft_split(char *str)
{
	if	(str == NULL)
		return(NULL);
	int i;
	int k;
	int j;
	char **arr;

	i = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * 1024);
	if	(arr == NULL)
		return(NULL);
	while	(str[i] != '\0')
	{

		while	(str[i] == ' ' || str[i] == '\t')
			i++;
		if	(str[i] == '\0')
			break;
		arr[j] = (char *)malloc(sizeof(char ) * 1024);
		if (arr == NULL)
			return(NULL);
		k = 0;
		while	(!(str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
		{
			arr[j][k] = str[i];
			k++;
			i++;
		}
		arr[j][k] = '\0';
		j++;
	}
	arr[j] = NULL;
	return(arr);
}

int main(int ac, char *av[])
{
	char **str;
	int i;

	i = 0;
	if	(ac == 2)
	{
		str = ft_split(av[1]);
		while	(str[i] != '\0')
		{
			printf("%s\n", str[i]);
			i++;
		}
	}
	return(0);
}
