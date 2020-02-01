/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:06:37 by esilva-s          #+#    #+#             */
/*   Updated: 2020/02/01 19:22:19 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s1)
{
    char *dest;
    size_t x;

    x = 0;
    if (!(dest = malloc(sizeof(s1) + 1)))
        return(NULL);
    while (s1[x] != '\0')
    {
        dest[x] = s1[x]; 
        x++;
    }
    dest[x] = '\0';
    return (dest);
}
