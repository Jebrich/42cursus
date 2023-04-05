#include "libft.h"
#include <stdio.h>


char test(unsigned int index, char c)
{
    if (ft_islower(c))
    {   
        return ft_toupper(c);
    }   
    return c;
}


int main(void)
{
    char *s = "hello, world!";
    char *result = ft_strmapi(s, test);
    printf("%s\n", result); // Output: HELLO, WORLD!
    free(result);
    return 0;
}

