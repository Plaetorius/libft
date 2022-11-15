/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:49:39 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 21:34:46 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;
	t_list	*tmp;

	if (!lst)
		return ;
	if (*lst && lst && del)
	{
		ptr = *lst;
		while (ptr)
		{
			tmp = ptr;
			ptr = ptr->next;
			if (del)
				del(tmp->content);
			free(tmp);
		}
		*lst = NULL;
	}
}

// void ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	while (lst)
// 	{
// 		f(lst->content);
// 		lst = lst->next;
// 	}
// }

// void	ft_print_int(void *elem)
// {
// 	printf("%d\n", *(int *)elem);
// }

// int main()
// {
// 	t_list *l =  ft_lstnew(malloc(1));
// 		for (int i = 0; i < 10; ++i)
// 			ft_lstadd_front(&l, ft_lstnew(malloc(1)));

// 	// printf("Cell1 %p\n", cell1);
// 	// printf("Cell2 %p\n", cell2);
// 	// printf("Cell3 %p\n", cell3);
// 	// printf("Cell4 %p\n", cell4);

// 	// printf("Content Cell1 %p\n", cell1->content);
// 	// printf("Content Cell2 %p\n", cell2->content);
// 	// printf("Content Cell3 %p\n", cell3->content);
// 	// printf("Content Cell4 %p\n", cell4->content);

// 	// printf("Next Cell1 %p\n", cell1->next);
// 	// printf("Next Cell2 %p\n", cell2->next);
// 	// printf("Next Cell3 %p\n", cell3->next);
// 	// printf("Next Cell4 %p\n", cell4->next);

// 	// printf("Start %p\n", start);

// 	// ft_lstiter(cell1, &ft_print_int);
// 	ft_lstclear(&l, free);
// 	// ft_lstiter(&l, &ft_print_int);
// 	return (0);
// }
