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
