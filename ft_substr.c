/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:07:01 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 16:46:52 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;
	size_t	len_str;

	if (!s)
		return (NULL);
	len_str = ft_strlen(s);
	if (start > len_str)
		sub = malloc(sizeof(char));
	else if (len >= len_str)
		sub = malloc(sizeof(char) * (len_str - start + 1));
	else
		sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start] && len-- > 0 && start < len_str)
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}

// int main(int ac, char **av)
// {
// 	(void) ac;
// 	puts(ft_substr(av[1], atoi(av[2]), atoi(av[3])));
// 	return (0);
// }
