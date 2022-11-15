/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:22:10 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 16:35:55 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (str - len);
}

// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	size_t	len;
// 	char	*str;

// 	len = ft_strlen(s1) + ft_strlen(s2);
// 	// if (!len)
// 	// {
// 	// 	str = malloc(sizeof str);
// 	// 	if (!str)
// 	// 		return (NULL);
// 	// 	str[0] = '\0';
// 	// 	return (str);
// 	// }
// 	// printf("%lu\n", len + ((*s1 && *s2)));
// 	str = malloc(sizeof str * (len + (*s1 && *s2)));
// 	if (!str)
// 		return (NULL);
// 	while (*s1)
// 		*str++ = *s1++;
// 	while (*s2)
// 		*str++ = *s2++;
// 	*str = '\0';
// 	return (str - len);
// }

// int main(void)
// {
// 	char *s = ft_strjoin("4a", "b");
// 	printf("Strmc %lu\n", strlen("4a") + strlen("b") + 1);
// 	puts(s);
// 	return (0);
// }
