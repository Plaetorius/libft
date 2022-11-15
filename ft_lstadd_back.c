/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:38:19 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 21:18:56 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	if (!(ptr))
		(*lst) = new;
	else
	{
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
}

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list *ptr;

// 	ptr = *lst;
// 	if (!ptr) //Check if lst is NULL
// 	{
// 		printf("%p\n", ptr);
// 		printf("%p\n", *lst);
// 		(*lst) = new;
// 		(*lst)->content = new->content;
// 		(*lst)->next = new->next;
// 	}
// }

// t_list	*ft_lstlast(t_list *lst)
// {
// 	while (lst->next)
// 		lst = lst->next;
// 	return (lst);
// }

// int main()
// {
// 	t_list *cell1;
// 	t_list *cell2;
// 	t_list *cell3;

// 	cell1 = malloc(sizeof cell1);
// 	cell2 = malloc(sizeof cell2);
// 	cell3 = malloc(sizeof cell3);
// 	cell1->next = cell2;
// 	cell2->next = NULL;
// 	cell3->content = "hi";
// 	cell3->next = NULL;

// 	ft_lstadd_back(&cell1, cell3);
// 	printf("%s\n", (char *)(ft_lstlast(cell1)->content));
// 	return (0);
// }
