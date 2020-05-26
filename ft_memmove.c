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

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char			*a;
	unsigned const char		*b;
	size_t					i;

	i = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (a > b)
	{
		while (++i <= n)
			a[n - i] = b[n - i];
	}
	else
	{
		ft_memcpy(a, b, n);
	}
	return (a);
}
