/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 12:57:37 by esilva-s          #+#    #+#             */
/*   Updated: 2020/03/25 12:58:01 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t len, size_t n)
{
  char *s;
  
  if (!len || !n)
    return (NULL);
  s = malloc(len * n);
  if (!s)
    return (NULL);
  bzero(s, len);
  return ((void *)s);
}
