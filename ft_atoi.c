/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 12:57:15 by esilva-s          #+#    #+#             */
/*   Updated: 2020/03/25 13:10:33 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_space(const char *c)
{
	if (*c == ' ' || *c == '\n' || *c == '\t')
		return (1);
	if (*c == '\v' || *c == '\f' || *c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	negative;

	negative = 1;
	result = 0;
	while (ft_space(nptr))
		nptr++;
	if (*nptr == '-')
		negative = -1;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr && *nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - 48);
		nptr++;
	}
	result = result * negative;
	return (result);
}
