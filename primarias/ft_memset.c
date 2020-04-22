/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:29:15 by esilva-s          #+#    #+#             */
/*   Updated: 2020/02/02 18:29:17 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	char		*x;

	x = str;
	i = 0;
	while (x[i] && i < n)
	{
		x[i] = (unsigned char)c;
		i++;
	}
	return (str);
}
