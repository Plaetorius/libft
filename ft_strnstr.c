/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:49:13 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 21:01:48 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(const char *haystack, const char *needle, size_t i,
	size_t len)
{
	size_t	j;

	j = 0;
	while (j < len && i + j < len && needle[j] == haystack[i + j]
		&& needle[j] && haystack[i + j])
		j++;
	if (!(needle[j]))
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!(needle[i]))
		return ((char *)haystack);
	if (ft_find(haystack, needle, i, len))
		return ((char *)(&haystack[i]));
	while (i < len - 1 && haystack[i])
	{
		if (ft_find(haystack, needle, i, len))
			return ((char *)(&haystack[i]));
		i++;
	}
	if (ft_find(haystack, needle, i, len))
		return ((char *)(&haystack[i]));
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
//     char *s1 = "MZIRIBMZIRIBMZE123";
//     char *s2 = "MZIRIBMZE";
//     size_t max = strlen(s2);
//     char *i1 = ft_strnstr(s1, s2, max);

// 	printf("%s\n", i1);

// 	return 0;
// }
