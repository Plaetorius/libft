/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:07:09 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 15:38:48 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_revmemcpy(void *dst, const void *src, size_t n)
{
	while (n > 0)
	{
		*(unsigned char *)(dst + n - 1) = *(unsigned char *)(src + n - 1);
		n--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	size_t	i;

	if (!dst && !src && size)
		return (dst);
	i = 0;
	if (dst > src)
		dst = ft_revmemcpy(dst, src, size);
	else
	{
		while (i < size)
		{
			*(unsigned char *)(dst + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	char src1[50];
// 	char src2[50];

// 	strcpy(src1, "This is a test");
// 	strcpy(src2, "This is a test");

// 	char *dest1;
// 	char *dest2;

// 	dest1 = malloc(sizeof dest1 * (strlen(src1) + 1));
// 	dest2 = malloc(sizeof dest2 * (strlen(src2) + 1));

// 	memmove(dest1, src1, 3);
// 	ft_memmove(dest2, src2, 3);

// 	puts(dest1);
// 	puts(dest2);

// 	return (0);
// }
