#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int ft_putstr(char *str)
{
    int i;

    str = "hie there";
    i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}
