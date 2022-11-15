/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:34:29 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 16:34:27 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdlib.h>

size_t	ft_strlen(const char *s);

static int	ft_is_c_in_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_str_printing(char *str, const char *src, int start, int end)
{
	int	i;

	i = 0;
	str = malloc(sizeof (char) * (end - start + 2));
	if (!str)
		return (NULL);
	while (start <= end)
	{
		str[i] = src[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1)
		return (NULL);
	start = 0;
	str = NULL;
	end = ft_strlen(s1) - 1;
	while (ft_is_c_in_set(s1[start], set))
		start++;
	while (ft_is_c_in_set(s1[end], set))
		end--;
	if (end - start < 0)
	{
		str = malloc(sizeof (char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	return (ft_str_printing(str, s1, start, end));
}

// int puts(const char *);

// int main(int ac, char **av)
// {
// 	(void) ac;
// 	puts(ft_strtrim(av[1], av[2]));
// 	return (0);
// }