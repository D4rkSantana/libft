/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 19:41:44 by esilva-s          #+#    #+#             */
/*   Updated: 2020/03/25 13:14:11 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t l)
{
	unsigned char			*a;
	unsigned const char		*b;
	char					back[50];
	size_t					i;
	size_t					j;

	i = 0;
	j = 0;
	a = dst;
	b = src;
	while (a[i])
	{
		back[i] = a[i];
		i++;
	}
	back[i + 1] = '\0';
	i = 0;
	while (i < l)
	{
		a[i] = b[i];
		i++;
	}
	while (back[j])
	{
		a[i] = back[j];
		i++;
		j++;
	}
	return (a);
}
