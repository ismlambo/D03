#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
    int tempA;
    int tempB;
    int newA;
    int newB;

    tempA = *a;
    tempB = *b;
    newA = tempA / tempB;
    newB = tempA % tempB;
    *a = newA;
    *b = newB; 
}

