#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
        int i;
        int j;

        i = 0;
        while   (reject[i])
        {
                j = 0;
                while   (s[j] != reject[i] && reject[j])
                {
                        if  (s[j] == reject[i])
                                return(j);
                        j++;
                }
                i++;
        }
        return(j);
}
int main()
{
    int size;

    char str1[] = "geeksforgeeks";
    char str2[] = "kfc";

    size = ft_strcspn(str1, str2);

    printf("The unmatched characters before first matched character :  %d\n", size);
}
