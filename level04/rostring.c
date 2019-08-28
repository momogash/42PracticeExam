#include <unistd.h>
int space(char c)
{
	if  (c == ' ' || c == '\t')
		return(1);
	return(0);
}

void rotstring(char *str)
{
	int i;
	int startFirstWord;
	int endFirstWord;
	int len;

	i = 0;
	startFirstWord = 0;
	endFirstWord = 0;
	len = 0;

	while  (space(str[i]) && str[i])
		i++;
	startFirstWord = i;
	while  (!space(str[i]) && str[i])
		i++;
	endFirstWord = i;
	while   (str[i] != '\0' && space(str[i]))
		i++; 
	while	(str[i] != '\0')
	{
		if	(space(str[i]) && str[i])
			i++;
		else 
		{	
			while (!space(str[i]) && str[i])
			{
				write(1, &str[i], 1);
				i++;
			}
		   write(1, " ", 1);	
		}
	}
	if	(str[i] == '\0')
	{
		while (startFirstWord < endFirstWord)
		{
			write(1, &str[startFirstWord], 1);
			startFirstWord++;
		}
	}
}

int main(int ac, char *av[])
{
	if  (ac > 1)
		rotstring(av[1]);
	write(1, "\n", 1);
	return(0);
}
