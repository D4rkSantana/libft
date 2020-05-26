/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 12:57:37 by esilva-s          #+#    #+#             */
/*   Updated: 2020/05/26 15:47:47 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t len, size_t n)
{
	void	*str;
	size_t	i;

	i = 0;
	str = malloc(len * n);
	if (str == 0)
		return (0);
	ft_bzero(str, (len * n));
	return (str);
}
