/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:07:26 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/10 10:29:13 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*ptr;

	ptr = *lst;
	*lst = new;
	(*lst)->next = ptr;
}

// int main()
// {
// 	t_list *cell1;
// 	t_list *cell2;
// 	t_list **ptr;
// 	char str1[50] = "hi";
// 	char str2[50] = "this is a test";

// 	cell1 = malloc(sizeof cell1);
// 	cell2 = malloc(sizeof cell2);
// 	ptr = malloc(sizeof ptr);
// 	*ptr = cell1;
// 	cell1->content = str1;
// 	cell2->content = str2;
// 	ft_lstadd_front(ptr, cell2);
// 	printf("%s\n", (char *)((cell1->next)->content));
// 	return (0);
// }
