/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpbrk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momogash <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 08:14:55 by momogash          #+#    #+#             */
/*   Updated: 2019/08/01 08:55:32 by momogash         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpbrk(char *s1, char *s2)
{
	int i;
	int j;
	int pos;
	int flag = 1;

	i = 0;
	while	(s1[i] != '\0')
		i++;
	pos = i;
	while	(s2[i] != '\0')
	{
		j = 0;
		while	(s1[j] != '\0')
		{
			if	(s2[i] == s1[j])
			{
				if	(j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
			j++;
		}
		i++;
	}
	if	(flag == 1)
		return (&s1[pos]);
	else
		return(NULL);
}

int main(void)
{
	char string1[50], string2[50];
    char *pos;

    printf("Enter the String:\n");
    scanf(" %[^\n]s", string1);
    printf("\nEnter the Character Set:\n");
    scanf(" %[^\n]s", string2);
    pos = ft_strpbrk(string1, string2);
    printf("%s", pos);	
}

