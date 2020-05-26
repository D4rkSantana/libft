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

static int	in_start_or_end(const char *s, const char *set, int x)
{
	int		size;
	int		count;
	int		result;

	count = 0;
	size = ft_strlen(s);
	while (count < size)
	{
		if (x && ft_strchr(set, s[count]) == NULL)
			break ;
		if (!x && ft_strchr(set, s[size - count - 1]) == NULL)
			break ;
		count++;
	}
	if (x)
		result = count;
	if (!x)
		result = size - count;
	return (result);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new;

	if (set == NULL)
		return (ft_strdup(s1));
	if (set == NULL)
		return (NULL);
	start = in_start_or_end(s1, set, 1);
	end = in_start_or_end(s1, set, 0);
	if (start >= end)
		return (ft_strdup(""));
	if (!(new = (char *)malloc(sizeof(char) * (end - start + 1) + 1)))
		return (NULL);
	ft_strlcpy(new, s1 + start, end - start + 1);
	return (new);
}
