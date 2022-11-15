/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:10:36 by tgernez           #+#    #+#             */
/*   Updated: 2022/09/17 18:42:00 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_nb_printing(long nb, char *str, int is_neg, size_t len)
{
	if (is_neg)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[len + is_neg] = '\0';
	len--;
	while (nb > 9)
	{
		str[len-- + is_neg] = (nb % 10) + '0';
		nb /= 10;
	}
	str[len + is_neg] = nb + '0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	size_t	len;
	int		is_neg;

	nb = n;
	len = 1;
	is_neg = 0;
	if (nb < 0)
	{
		is_neg = 1;
		nb = -nb;
	}
	while (nb > 9)
	{
		nb /= 10;
		len++;
	}
	str = malloc(sizeof (char) * (len + is_neg + 1));
	if (!str)
		return (NULL);
	str = ft_nb_printing(n, str, is_neg, len);
	return (str);
}

// int main(int ac, char **av)
// {
// 	(void) ac;
// 	printf("%s\n", ft_itoa(atoi(av[1])));
// 	return (0);
// }
