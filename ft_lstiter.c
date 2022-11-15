/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:39:53 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 21:23:35 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst && f)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void ft_plus_10(void *a)
// {
// 	*(int *)a += 10;
// }

// int main()
// {
// 	t_list *cell1;
// 	t_list *cell2;
// 	t_list *cell3;
// 	t_list *cell4;
// 	int a = 1;
// 	int b = 2;
// 	int c = 3;
// 	int d = 4;

// 	cell1 = malloc(sizeof cell1);
// 	cell2 = malloc(sizeof cell2);
// 	cell3 = malloc(sizeof cell3);
// 	cell4 = malloc(sizeof cell4);
// 	cell1->next = cell2;
// 	cell2->next = cell3;
// 	cell3->next = cell4;
// 	cell4->next = NULL;
// 	cell1->content = &a;
// 	cell2->content = &b;
// 	cell3->content = &c;
// 	cell4->content = &d;
// 	ft_lstiter(cell1, &ft_plus_10);
// 	printf("%d\n", *((int *)cell4->content));
// 	return(0);
// }
