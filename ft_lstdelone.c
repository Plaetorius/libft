/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:46:03 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 21:35:22 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst)
	{
		if (del)
			del(lst->content);
		free(lst);
	}
}

// void ft_del(void *elem)
// {
// 	free(elem);
// }

// void ft_printf(void *elem)
// {
// 	printf("%s\n", (char *)elem);
// }

// void	ft_lstiter(t_list *lst, void (*f)(void *))
// {
// 	while (lst)
// 	{
// 		f(lst->content);
// 		lst = lst->next;
// 	}
// }

// int main()
// {
// 	t_list *cell1;
// 	t_list *cell2;
// 	t_list *cell3;
// 	t_list *cell4;

// 	cell1 = malloc(sizeof cell1);
// 	cell2 = malloc(sizeof cell2);
// 	cell3 = malloc(sizeof cell3);
// 	cell4 = malloc(sizeof cell4);

// 	cell1->next = cell2;
// 	cell2->next = cell3;
// 	cell3->next = cell4;
// 	cell4->next = NULL;

// 	cell1->content = strdup("Content 1");
// 	cell2->content = strdup("Content 2");
// 	cell3->content = strdup("Content 3");
// 	cell4->content = strdup("Content 4");

// 	ft_lstiter(cell1, &ft_printf);
// 	printf("\nDeleting cell3\n\n");
// 	ft_lstdelone(cell3, &ft_del);
// 	ft_lstiter(cell1, &ft_printf);
// 	return (0);
// }
