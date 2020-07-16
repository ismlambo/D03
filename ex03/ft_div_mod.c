#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int ft_putchar(int c)
{
    write(1, &c, 1);
}


void ft_div_mod(int *a, int *b, int *div, int *mod)
{
    int A;
    int B;

    A = *a;
    B = *b;
    *div = A / B;
    *mod = A % B;
}
