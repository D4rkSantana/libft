/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:29:15 by esilva-s          #+#    #+#             */
/*   Updated: 2020/05/26 14:22:10 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*new;
	unsigned char	src;

	new = (unsigned char *)str;
	src = c;
	i = 0;
	while (i < n)
	{
		new[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
