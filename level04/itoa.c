#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
        int i;
        int j;
        char *str;
        char *temp;
        int sign;

        str = (char *)malloc(sizeof(char) * 12);
        temp = (char *)malloc(sizeof(char) * 12);
        i = 0;
        j = 0;
        sign = 1;

        if  (nbr == 0)
                return("0");
        if  (nbr == -2147483648)
                return("-2147483648");
        if  (nbr < 0)
        {
                sign = -1;
                nbr = nbr * (-1);
                printf("nbr within sign is %d\n", nbr);
        }
        while   (nbr > 0)
        {
                temp[i] = nbr % 10 + '0'; // done to store the number, lst nbr
                nbr = nbr / 10; // cut off the remainder, assign new number, loop stops when nbr = 0;
                i++; // i is now at the end of string
                printf("i within the while loop is %d\n", i);
        }
        if  (sign == -1)
        {
                str[0] = '-';
                j = 1;
        }
        i--; 
        printf("i after i-- outside while is %d\n", i);
        while   (i >= 0)
        {
                str[j] = temp[i];
                j++;
                i--;
        }
        str[j] = '\0';
        printf("value of i aftr copying to str is %d and j is %d\n", i, j);
        return(str);
}

int main(void)
{
        char *str;

        str = ft_itoa(-2147483647);
        printf("%s\n", str);
        return(0);
}
