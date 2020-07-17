# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#                                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ismlambo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/17 10:29:53 by ismlambo          #+#    #+#              #
/*   Updated: 2020/07/17 10:31:32 by ismlambo         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #
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
