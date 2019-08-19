#include <unistd.h>

int ft_atoi(char *str)
{
        int sign;
        int i;
        int result;

        i = 0;
        sign = 1;
        if  (str[0] == '-')
        {
                sign = -1;
                i++;
        }
        result = 0;
        while   (str[i] == '\t'|| str[i] == '\v'|| str[i] == '\n' || str[i] == ' '|| str[i] == '\r' || str[i] == '\f')
                i++;
        while   (str[i] && (str[i] >= '0' && '9'>= str[i]))
        {
                result = result * 10 + str[i] - '0';
                i++;
        }
        return(result * sign);
}

void print_hex(int nbr)
{
        char *str;

        str = "0123456789abcdef";
        if  (nbr == '0')
                write(1, "0", 1);
        while   (nbr)
        {
                write(1, &str[nbr % 16], 1);
                nbr = nbr / 16;
        }
}

int main(int ac, char *av[])
{
        if  (ac == 2)
                print_hex(ft_atoi(av[1]));
        write(1, "\n", 1);
        return(0);
}
