/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_have_space.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 22:29:38 by esilva-s          #+#    #+#             */
/*   Updated: 2022/07/10 22:43:05 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_have_space(const char *str)
{
	int	size;
	int	count;

	size = ft_strlen(str);
	count = 0;
	while (count < size)
	{
		if (ft_isspace(str[count]))
			return (1);
		count++;
	}
	return (0);
}
