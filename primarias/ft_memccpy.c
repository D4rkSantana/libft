/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 18:45:25 by esilva-s          #+#    #+#             */
/*   Updated: 2020/02/05 18:45:29 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char *a;
    const char *b;
    int i;

    a = dest;
    b = src;
    i = 0;
    while (i < n)
    {
        a[i] = b[i];
        if (a[i] == (unsigned char)c)
            return (&a[i + 1]);
        i++;
    }
    return (NULL);
}