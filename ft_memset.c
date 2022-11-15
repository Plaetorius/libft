/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 18:40:21 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/07 15:00:21 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*(unsigned char *)(b + i) = (unsigned char)c;
		i++;
	}
	return (b);
}

// int main () {
// 	char str[50];
// 	char str2[50];
// 	int size = 40;

// 	strcpy(str,"This is string.h library function");
// 	puts(str);

// 	strcpy(str2,"This is string.h library function");
// 	puts(str2);

// 	memset(str, '@', size);
// 	puts(str);

// 	ft_memset(str2, '@', size);
// 	puts(str2);

//    return(0);
// }
