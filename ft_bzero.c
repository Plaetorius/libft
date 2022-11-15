/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:32:07 by tgernez           #+#    #+#             */
/*   Updated: 2022/09/10 10:55:03 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return ;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}

// #include <strings.h>
// #include <stdio.h>

// int main()
// {
// 	char str1[50];
// 	char str2[50];

// 	strcpy(str1, "I'm test unit 1");
// 	strcpy(str2, "I'm test unit 2");

// 	puts(str1);
// 	puts(str2);

// 	bzero(str1 + 3, 3);
// 	ft_bzero(str2 + 3, 3);

// 	puts(str1);
// 	puts(str2);

// 	int tab[5] = {1, 2, 3, 4, 5};
// 	int i;

// 	i = 0;
// 	bzero(tab, 13);
// 	while (i < 5)
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}

// 	return (0);
// }
