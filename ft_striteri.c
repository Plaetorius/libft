/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 21:43:14 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 16:40:20 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_toupper_void(unsigned int ind, char *str)
// {
// 	if ('a' <= str[ind] && str[ind] <= 'z')
// 		str[ind] = str[ind] - 32;
// }

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, (s + i));
		i++;
	}
}

// int main(int ac, char **av)
// {
// 	(void) ac;
// 	char *str;

// 	str = malloc(sizeof strlen(av[1]));
// 	strcpy(str, av[1]);
// 	ft_striteri(str, ft_toupper_void);
// 	printf("%s", str);
// }

// void iter(unsigned int i, char *s) {
// 	*s += i;
// }

// int main(void)
// {
// 	char s[] = "0000000000";
// 	ft_striteri(s, iter);
// 	printf("%s\n", s);

// }
