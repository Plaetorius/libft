/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:46:33 by tgernez           #+#    #+#             */
/*   Updated: 2022/10/01 20:48:49 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	c = (nb % 10) + '0';
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		write(fd, &c, 1);
	}
	else
		write(fd, &c, 1);
}

// int main()
// {
// 	ft_putnbr_fd(-2147483648, 1);
// 	return (0);
// }
