/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 10:04:17 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/08 14:48:40 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	i;
	int	is_neg;

	nb = 0;
	i = 0;
	is_neg = 0;
	while (str[i] == ' ' || (8 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		is_neg = 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (is_neg)
		return (-nb);
	return (nb);
}

// int main(int ac, char **av)
// {
// 	(void) ac;
// 	printf("%d\n", atoi(av[1]));
// 	printf("%d\n", ft_atoi(av[1]));
// }
