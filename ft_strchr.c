/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 08:38:43 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 15:44:02 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
		i++;
	}
	if (*(s + i) == c)
		return ((char *)(s + i));
	return (NULL);
}

// #include <stdio.h>

// int main(int ac, char **av)
// {
// 	if (ac != 3)
// 	{
// 		puts("Wrong arguments");
// 		return (1);
// 	}
// 	puts(strchr(av[1], av[2][0]));
// 	puts(ft_strchr(av[1], av[2][0]));

// 	return (0);
// }

// #include <stdio.h>

// int main(int ac, char **av)
// {
// 	(void) ac;
// 	(void) av;

// 	char str1[50];
// 	char str2[50];

// 	strcpy(str1, "This is a test");
// 	strcpy(str2, "This is a test");

// 	puts(strchr(str1, '\0'));
// 	puts(ft_strchr(str2, '\0'));

// 	return (0);
// }

// int main(void)
// {
// 	char s[] = "tripouille";
// 	char s2[] = "tripouille";
// 	printf("%s\n", strchr(s, 't' + 256));
// 	printf("%s\n", ft_strchr(s2, 't' + 256));
// 	write(1, "\n", 1);
// 	return (0);
// }
