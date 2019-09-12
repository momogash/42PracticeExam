/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 13:35:17 by momogash          #+#    #+#             */
/*   Updated: 2019/09/12 15:56:22 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

char    **ft_split(char *str)
{
	char **arr;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;

	if(!*str)
		return(NULL);

	arr = (char **)malloc(sizeof(char *) * 1024);
	if	(arr == NULL)
		return(NULL);

	while	(str[i] != '\0')
	{
		arr[j] = (char *)malloc(sizeof(char) * 1024);
		if	(arr == NULL)
			return(NULL);

		while	(( str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
			i++;

		if	(str[i] == '\0')
			break;
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
	char **res;
	int i;

	i = 1;

	if	(ac == 2)
	{
		res = ft_split(av[1]);
		while	(res[i])
		{
			ft_putstr(res[i]);
			ft_putstr(" ");
			i++;
		}
		ft_putstr(res[0]);
	}
	ft_putstr("\n");
	return(0);
}

