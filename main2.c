/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:27:06 by esilva-s          #+#    #+#             */
/*   Updated: 2020/02/05 19:27:10 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    char *x;
    char big[50];
    char bigger[50];

    ft_strlcpy(big, "AAAAAAAAA", 50);
    x = ft_memccpy(big, "BBBx", 'x', 5);
    printf("\n %s \n", x);
    ft_strlcpy(bigger, "memmove can be very useful......", 50);
    ft_memmove(bigger + 20, bigger + 15, 11);
    printf("\n %s \n", bigger);
    return (0);
}
