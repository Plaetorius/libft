/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 11:33:02 by tgernez           #+#    #+#             */
/*   Updated: 2022/09/25 15:06:25 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	t_list *cell1;
// 	t_list *cell2;
// 	t_list *cell3;

// 	cell1 = malloc(sizeof cell1);
// 	cell2 = malloc(sizeof cell2);
// 	cell3 = malloc(sizeof cell3);
// 	cell1->next = cell2;
// 	cell2->next = cell3;
// 	cell3->next = NULL;

// 	cell3->content = "hi";

// 	printf("%s\n", (char *)(ft_lstlast(cell1)->content));
// 	return (0);
// }
