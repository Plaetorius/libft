/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:02:12 by tgernez           #+#    #+#             */
/*   Updated: 2022/09/10 11:18:09 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = NULL;
	while (*(s + i))
	{
		if (*(s + i) == c)
			ptr = (char *)(s + i);
		i++;
	}
	if (*(s + i) == c)
		return ((char *)(s + i));
	return (ptr);
}

// #include <stdio.h>

// int main(int ac, char **av)
// {
// 	(void) ac;
// 	puts(strrchr(av[1], av[2][0]));
// 	puts(ft_strrchr(av[1], av[2][0]));
// }

// int main()
// {
// 	char str1[50];
// 	char str2[50];

// 	strcpy(str1, "This is a test");
// 	strcpy(str2, "This is a test");

// 	puts(strrchr(str1, '\0'));
// 	puts(ft_strrchr(str2, '\0'));

// 	return (0);
// }
