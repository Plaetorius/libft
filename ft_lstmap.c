/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:45:28 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 21:33:06 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	new = NULL;
	tmp = new;
	while (lst)
	{
		if (!f)
			new = ft_lstnew(lst->content);
		else
			new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&tmp, del);
			return (NULL);
		}
		ft_lstadd_back(&tmp, new);
		lst = lst->next;
	}
	return (tmp);
}

// void * addOne(void * p)
// {
// 	void * r = malloc(sizeof(int));
// 	*(int*)r = *(int*)p + 1;
// 	return (r);
// }
