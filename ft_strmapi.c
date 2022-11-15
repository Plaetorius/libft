/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:32:03 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/10 10:24:32 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	len;
	int		i;

	if (!s)
		return (NULL);
	if (!f)
		return ((char *)s);
	len = ft_strlen(s);
	str = malloc(sizeof (char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	str[len] = '\0';
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}

// int main(int ac, char **av)
// {
// 	(void) ac;
// 	printf("\n%s\n", ft_strmapi(av[1], &ft_toupper));
// 	return (0);
// }
