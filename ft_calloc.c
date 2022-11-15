/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:23:39 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/08 15:18:07 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size > 0 && count > ULLONG_MAX / size)
		return (NULL);
	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main()
// {
// 	printf("Ft_calloc %s\n", (char *)ft_calloc(-1, -3));
// 	printf("Null %s\n", (char *)NULL);
// 	printf("Calloc %s\n", (char *)calloc(-1, -3));
// 	return (0);
// }
