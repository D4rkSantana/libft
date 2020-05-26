/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 13:17:04 by esilva-s          #+#    #+#             */
/*   Updated: 2020/03/25 13:19:46 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!lst || !*lst || !del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmp2 = tmp->next;
		del((*lst)->content);
		free(tmp);
		tmp = tmp2;
	}
	*lst = NULL;
}
