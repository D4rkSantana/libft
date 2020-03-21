/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 15:05:35 by esilva-s          #+#    #+#             */
/*   Updated: 2020/01/29 15:05:36 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (!dst || !src)
        return (0);
    while(dst[i])
        i++;
    if(!dstsize)
        return (i);
    while (src[j] && j < dstsize - 1)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';
    return (ft_strlen(dst));
    
    
}
