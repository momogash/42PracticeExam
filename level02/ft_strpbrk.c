#include <stdio.h>

char* ft_strpbrk(char *, char *);

int main()
{
	char string1[50] = "hello";
	char string2[50] = "mlp";
	char *pos;

	pos = ft_strpbrk(string1, string2);
	printf("%s", pos);
}

/* Locates First occurrence in string s1 of any character in string s2, 
 * If a character from string s2 is found , 
 * a pointer to the character in string s1 is returned, 
 * otherwise,  a NULL pointer is returned.
 */
char* ft_strpbrk(char *string1, char *string2)
{
	int i;
	int j;
	int pos;
	int flag = 0;

	i = 0; 
	while	(string1[i] != '\0')
	{
		i++;
	}
	pos = i;
	i = 0;
	while	(string2[i] != '\0')
	{
		j = 0;
		while	(string1[j] != '\0')
		{
			if (string2[i] == string1[j])
			{
				if (j <= pos)
				{
					pos = j;    
					flag = 1;  
				}
			}
			j++;
		}
		i++;		
	}
	if (flag == 1)
	{
		return &string1[pos];
	}
	else
	{
		return NULL;
	}
}
