/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:52:37 by tgernez           #+#    #+#             */
/*   Updated: 2022/09/17 18:25:32 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*dest;

	i = 0;
	len = ft_strlen(s1);
	dest = malloc(sizeof (char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char * s = ft_strdup((char*)"coucou");
// 	printf("%lu\n", strlen("coucou") + 1);
// 	printf("%lu\n", strlen(s));
// }
