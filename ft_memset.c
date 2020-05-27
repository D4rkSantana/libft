/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:29:15 by esilva-s          #+#    #+#             */
/*   Updated: 2020/05/26 22:27:30 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;
	unsigned char	*new;
	unsigned char	src;

	new = (unsigned char *)b;
	src = c;
	i = 0;
	while (i < len)
	{
		new[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
