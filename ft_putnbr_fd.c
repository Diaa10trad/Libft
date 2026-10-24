/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltrad <daltrad@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 20:23:23 by daltrad           #+#    #+#             */
/*   Updated: 2026/10/17 16:06:49 by daltrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	src[10];
	int		i;

	i = 0;
	if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return ;
	}
	if (n < 0)
		ft_putchar_fd('-', fd);
	while (n != 0)
	{
		if (n > 0)
			src[i++] = (n % 10) + '0';
		else
		{
			src[i++] = -(n % 10) + '0';
		}
		n = n / 10;
	}
	while (i > 0)
		ft_putchar_fd(src[--i], fd);
}
