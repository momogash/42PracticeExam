#include <unistd.h>
#include <stdio.h>

int space(char c)
{
        if  (c == ' ' || c == '\t')
                return(1);
        return(0);
}

int ft_strlen(char *str)
{
        int i;

        i = 0;
        while   (str[i] != '\0')
                i++;
        printf("i at the end of strlen is %d\n", i);
        return(i);
}

void    print_word(char *str)
{
        int fast;
        int slow;
        int current;

        fast = ft_strlen(str) - 1;
        slow = fast;
        current = fast;

        while   (fast >= 0)
        {
                slow = fast;
                current = fast;

                while   (fast >= 0 && !space(str[fast]))
                        fast--;
                fast++; //get off the space to the first character of word
                current = fast; //assign it to current so it can be printed
                while   (current <= slow)//use slow coz its at the end
                {
                        write(1, &str[current], 1);
                        current++;
                }
                if  (fast > 0)
                        write(1, " ", 1); //wont allow space when fast is at 0
                fast--;
                fast--;
        }
}

int main(int ac, char *av[])
{
        if  (ac == 2)
                print_word(av[1]);
        write(1, "\n", 1);
        return(0);
}
