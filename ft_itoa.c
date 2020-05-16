/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 13:20:51 by esilva-s          #+#    #+#             */
/*   Updated: 2020/03/25 13:21:14 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_n(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
char    *ft_itoa(int n)
{
        char    *str;
        int     i;

        i = 0;
        if (!(str = malloc((size_n(n) + 1) * sizeof(char))))
                return (NULL);
        if (n == 0)
        {
                str[i] = (char)48;
                i++;
        }
        if (n < 0)
        {
                str[i] = '-';
                n = n * -1;
                i++;
        }
        while (n > 0)
        {
                str[i] = (char)n % 10;
                n = n / 10;
                i++;
        }
        str[i] = '\0';
        return (str);
}

