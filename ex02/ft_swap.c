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
