#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putchar2(char a, char b){
    ft_putchar(a);
    ft_putchar('\n');
    ft_putchar(b);
}

void ft_swap(int *a, int *b)
{
    int tempA;

    tempA = *a;
    *a = *b;
    *b = tempA;
}
