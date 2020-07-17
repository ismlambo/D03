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

