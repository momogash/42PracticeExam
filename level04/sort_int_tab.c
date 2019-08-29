/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 08:17:57 by momogash          #+#    #+#             */
/*   Updated: 2019/08/29 09:01:04 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	i = 0;
	int temp;

	while (i < size - 1)
	{
		if	(tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;

	}

}

int main(void)
{
	int tab[5] = {3, 4, 2, 1, 5};
	int size = 5;
	int i;

	i = 0;
	sort_int_tab(tab, size);
	while	(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	return(0);
}
