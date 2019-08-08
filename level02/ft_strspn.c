#include <stdio.h>

size_t  ft_strspn(const char *s, const char *accept)
{
        int i;
        int j;

        i = 0;
        while   (*s)
        {
                j = 0;
                while   (s[i] != accept[j] && accept[j])
                        j++;
                if  (accept[j] == '\0')
                        return(i);
                i++;
        }
        return(i);
}

int main(void)
{
        int len = ft_strspn("Learn from trytoprogram.com","rtyn eaL ofm");
        printf("Length of the matched segment is: %d\n", len); 
        return(0);
}
