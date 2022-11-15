/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:23:06 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 16:48:27 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n && !(*((unsigned char *)(s + i)) == (unsigned char)c))
		i++;
	if (i == n)
		return (NULL);
	else
		return ((void *)(s + i));
}

// int main()
// {
// 	char str1[50];
// 	char str2[50];
// 	int c;

// 	strcpy(str1, "This is ab test");
// 	strcpy(str2, "This is ab test");
// 	c = 32;

// 	puts((char *)memchr(str1, c, 12));
// 	puts((char *)memchr(str2, c, 12));

// 	return (0);
// }
