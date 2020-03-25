/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 16:05:42 by esilva-s          #+#    #+#             */
/*   Updated: 2020/02/01 16:05:49 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t len2;
	size_t i;

	i = 0;
	if (!s2)
		return ((char *)s1);
	len2 = ft_strlen(s2);
	while (s1[i] && i < len)
	{
		if (ft_strncmp(&s1[i], s2, len2) == 0)
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}