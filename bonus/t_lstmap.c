#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*result;
	t_list	*element;

	if (!lst || !del || !f)
		return;
	if (!(element = ft_lstnew(f(lst->content))))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	result = element;
	lst = lst->next;
	while (lst)
	{
		if (!(element = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&lst, del);
			break;
		}
		lst = lst->next;
		ft_lstadd_back(&result, element);
	}
	return (result);
}
