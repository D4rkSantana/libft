/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 13:25:35 by esilva-s          #+#    #+#             */
/*   Updated: 2020/03/25 13:44:22 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	unsigned int	count;

	if (!s || len < start)
		return (NULL);
	if (!(substr = malloc(sizeof(char) * (len - start) + 1)))
		return (NULL);
	count = 0;
	while (s[count + start])
	{
		substr[count] = s[count + start];
		count++;
	}
	substr[count] = '\0';
	return (substr);
}
