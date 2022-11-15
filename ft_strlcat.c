/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 22:24:43 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 16:02:12 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;

	if ((!dst || !src) && !dstsize)
		return (0);
	len_dest = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (len_dest > dstsize - 1)
		return (dstsize + len_src);
	if (dstsize == 0)
		return (len_src);
	while (i < dstsize - len_dest - 1 && src[i])
	{
		dst[len_dest + i] = src[i];
		i++;
	}
	dst[len_dest + i] = '\0';
	return (len_dest + len_src);
}
/*
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

int main(int argc, char **argv)
{
	(void) argc;
	//char s1[] = argv[1];
	char s2[strlen(argv[1])];
	//char c1[] = argv[2];
	char c2[strlen(argv[2])];
	unsigned int size = 0;

	strcpy(s2, argv[1]);
	strcpy(c2, argv[2]);
	printf("%d\n", ft_strlcat(argv[1], argv[2], size));
	printf("%ld\n", strlcat(s2, c2, size));
	return (0);
}
*/
