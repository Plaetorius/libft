/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgernez <tgernez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:22:00 by tgernez           #+#    #+#             */
/*   Updated: 2022/11/09 16:43:00 by tgernez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((unsigned char)(s1[i]) == (unsigned char)(s2[i])
	&& (unsigned char)(s1[i]) && (unsigned char)(s2[i]) && i < n - 1)
		i++;
	if ((unsigned char)(s1[i]) == (unsigned char)(s2[i]))
		return (0);
	else if ((unsigned char)(s1[i]) > (unsigned char)(s2[i]))
		return (1);
	else
		return (-1);
}
