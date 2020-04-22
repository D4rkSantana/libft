/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 13:23:37 by esilva-s          #+#    #+#             */
/*   Updated: 2020/03/25 13:23:48 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size;
	unsigned int	count_s;
	unsigned int	count_newstr;
	char		*newstr;

	if (!s1)
		return (s1);
	if (!s2)
		return (s2);
	size = ft_strlen(s1) + ft_strlen + 1;
	if (!(newstr = malloc(sizeof(char) * size)))
		return (NULL);
	count_s = 0;
	count_newstr = 0;
	while (s1[count_s])
	{
		newstr[count_newstr] = s1[count_s];
		count_s++;
		count_newstr++;
	}
	count_s = 0;
	while (s2[count_s])
	{
		newstr[count_newstr] = s2[count_s];
		count_s++;
		count_newstr++;
	}
	newstr[count_newstr] = '\0';
	return (newstr);
}
