/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 13:22:25 by esilva-s          #+#    #+#             */
/*   Updated: 2020/03/25 13:22:45 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			count_total(char const *s, char c)
{
	int				i;
	int				result;
	int				first;

	first = 1;
	result = 1;
	i = 0;
	while (s[i])
	{
		if (first && s[i] != c)
		{
			first = 0;
			result++;
		}
		if (s[i] == c && s[i + 1] != c)
			result++;
		i++;
	}
	return (result);
}

static int			count_word(char const *s, char c)
{
	int				i;

	i = 0;
	while (*s)
	{
		if (*s != c)
			i++;
		else
			return (i);
		s++;
	}
	return (i);
}

char				**ft_split(char const *s, char c)
{
	char			**result;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	result = malloc(count_total(s, c) * sizeof(char *));
	while (!s[i] == '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			result[j] = malloc(count_word(&s[i], c) * sizeof(char));
			while (s[i] != c)
			{
				*result[j] = s[i];
				i++;
				result[j]++;
			}
			j++;
		}
	}
	*result[j] = '\0';
	return (result);
}
