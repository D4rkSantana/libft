/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 13:23:54 by esilva-s          #+#    #+#             */
/*   Updated: 2020/05/26 16:19:45 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *a, char (*f)(unsigned int, char))
{
	char	*newstr;
	int		i;

	i = 0;
	if (!a)
		return (NULL);
	if (!(newstr = malloc(ft_strlen(a) * sizeof(char) + 1)))
		return (NULL);
	while (a[i] != '\0')
	{
		newstr[i] = f(i, a[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
