/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_lstmap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esilva-s <esilva-s@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/25 13:17:32 by esilva-s          #+#    #+#             */
/*   Updated: 2020/05/26 22:22:06 by esilva-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*next_element;
	t_list	*current;

	if (lst == NULL || f == NULL)
		return (NULL);
	result = ft_lstnew(f(lst->content));
	if (!(result))
		return (NULL);
	current = result;
	lst = lst->next;
	while (lst)
	{
		if ((next_element = ft_lstnew(f(lst->content))) == NULL)
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		current->next = next_element;
		current = next_element;
		lst = lst->next;
	}
	return (result);
}
