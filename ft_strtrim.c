/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 13:24:48 by esilva-s          #+#    #+#             */
/*   Updated: 2020/03/25 13:25:30 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char *c, char const *set)
{
	while (*set)
	{
		if (*c == *set)
			return (1);
		set++;
	}
	return (0);
}

int	count_not_set(const char *s1, const char *set)
{
	int	count;
	int	total;
	char	*c;
 
	count = 0;
	total = 0;
	c = 0;
	while (s1[count])
	{
		*c = s1[count];
		if (!(in_set(c, set)))
			total++;
		count++;
	}
	return (total);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	count;
	int	size;
	char	*new;

	if (set == NULL || s1 == NULL)
		return (NULL);
	size = 0;
	count = 0;
	size = count_not_set(s1, set) + 1;
	if (!(new = malloc(sizeof(char) * size)))
		return (NULL);
	while (*s1)
	{
		if (!(in_set((char *)s1, set)))
			new[count] = *s1;
		count++;
		s1++;
	}
	new[count] = '\0';
	return (new);
}
