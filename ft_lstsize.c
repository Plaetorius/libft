/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 09:37:54 by tgernez           #+#    #+#             */
/*   Updated: 2022/09/25 15:05:37 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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

// 	printf("%d\n", ft_lstsize(cell1));
// 	return (0);
// }
