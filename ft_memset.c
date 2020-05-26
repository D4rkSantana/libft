/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:29:15 by esilva-s          #+#    #+#             */
/*   Updated: 2020/05/26 11:40:43 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*new;
	unsigned char	src;

	new = str;
	src = c;
	i = 0;
	while (new[i] && i < n)
	{
		new[i] = src;
		i++;
	}
	return (str);
}
