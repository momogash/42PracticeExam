/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 17:16:18 by momogash          #+#    #+#             */
/*   Updated: 2019/09/12 17:57:09 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char    **ft_split(char *str)
{

	char **arr;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;

	if	(!str[i])
		return(NULL);

	arr = (char **)malloc(sizeof(char *) * 1024);
	if	(arr == NULL)
		return(NULL);
	while	(str[i] != '\0')
	{
		arr[j] = (char *)malloc(sizeof(char) * 1024);
		if	(arr == NULL)
			return(NULL);
		if	(str[i] == '\0')
			break;
		while	((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
			i++;
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

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while	(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char *av[])
{
	char **arr;
	int i;
	i = 0;
	if	(ac == 2)
	{

		arr = ft_split(av[1]);
		while	(arr[i] != NULL)
			i++;
		i--;
		while	(i >= 0)
		{
			ft_putstr(arr[i]);
			i--;
			if	(i >= 0)
				ft_putstr(" ");
		}
	}
	ft_putstr("\n");
	return(0);
}
