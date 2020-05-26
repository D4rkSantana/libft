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
	size_t	s2len;

	if (*s2 == '\0')
		return ((char *)s1);
	s2len = ft_strlen(s2);
	while (*s1 != '\0' && len-- >= s2len)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, s2len) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
