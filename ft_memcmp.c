/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:42:22 by tgernez           #+#    #+#             */
/*   Updated: 2022/10/04 09:34:04 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (i < n
		&& ((*(unsigned char *)(s1 + i)) == *((unsigned char *)(s2 + i))))
		i++;
	if (i == n)
	{
		i--;
		return (*((unsigned char *)(s1 + i)) - *((unsigned char *)(s2 + i)));
	}
	return (*((unsigned char *)(s1 + i)) - *((unsigned char *)(s2 + i)));
}

// int main(int ac, char **av)
// {
// 	(void) ac;
// 	printf("%d\n", memcmp(av[1], av[2], strlen(av[1])));
// 	printf("%d\n", ft_memcmp(av[1], av[2], strlen(av[1])));

// 	return (0);
// }

// int main(void)
// {
// 	char s3[] = {0, 0, 42, 0};
// 	char s2[] = {0, 0, 127, 0};
// 	printf("%d\n", ft_memcmp(s2, s3, 4));
// 	printf("%d\n", memcmp(s2, s3, 4));
// 	return (0);
// }
