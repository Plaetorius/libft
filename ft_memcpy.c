/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:22:18 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 16:41:11 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dst && !src && n)
		return (dst);
	while (i < n)
	{
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (dst);
}

// void	*ft_revmemcpy(void *dst, const void *src, size_t n)
// {
// 	while (n > 0)
// 	{
// 		printf("Char %c for n=%lu\n",  *(unsigned char *)(src + n - 1), n - 1);
// 		*(unsigned char *)(dst + n - 1) = *(unsigned char *)(src + n - 1);
// 		n--;
// 	}
// 	return (dst);
// }

// int main()
// {
// 	char	*dst;
// 	char	*src;

// 	dst = strdup("this is the destination");
// 	src = strdup("source");

// 	dst = ft_revmemcpy(dst, src, 4);
// 	printf("%s\n", dst);

// 	dst = strdup("this is the destination");
// 	src = strdup("source");

// 	dst = memcpy(dst, src, 4);
// 	printf("%s\n", dst);
// 	return (0);
// }
