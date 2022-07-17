/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 04:21:23 by esilva-s          #+#    #+#             */
/*   Updated: 2022/07/11 05:40:33 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_list_len(char **list_args)
{
	int	result;
	int	count;

	result = 0;
	count = 0;
	while (list_args[count] != 0)
	{
		result++;
		count++;
	}
	return (result);
}
