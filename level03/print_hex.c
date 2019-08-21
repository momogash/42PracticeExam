#include <unistd.h>

int	ft_atoi(char *str)
{
	int sign;
	int result;
	int i;

	i = 0;
	sign = 1;
	if	(str[0] == '-')
	{
		sign = -1;
		i++;
	}
	result = 0;
	while	(str[i] == '\t' || str[i] == '\f' || str[i] == ' ' || str[i] == '\n' || str[i] == '\r')
		i++;
	while	(str[i] != '\0' && (str[i] >= '0' && '9'>= str[i]))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return(result * sign);

}

void print_hex(int nbr)
{
	if	(nbr >= 16)
		print_hex(nbr / 16);
	if	(nbr % 16 < 10)
		nbr = (nbr % 16) + '0';
	else
		nbr = (nbr % 16) - 10 + 'a';
	write(1, &nbr, 1);
}

int main(int ac, char *av[])
{
	if	(ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
	return(0);
}
