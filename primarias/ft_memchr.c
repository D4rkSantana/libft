/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 12:58:26 by esilva-s          #+#    #+#             */
/*   Updated: 2020/03/25 12:58:28 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	unsigned int	count;
	unsigned char	*str;
	unsigned char	chr;

	count = 0;
	str = (unsigned char *)s;
	chr = (unsigned char)c;
	while (count < n)
	{
		if(str[count] ==  chr)
			return (str[count]);
		count++;
	}
	return (NULL);
}
