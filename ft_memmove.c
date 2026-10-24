/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltrad <daltrad@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/18 16:34:53 by daltrad           #+#    #+#             */
/*   Updated: 2026/09/25 19:14:37 by daltrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*ddest;
	const unsigned char	*ssrc;
	size_t				i;

	ddest = (unsigned char *) dest;
	ssrc = (const unsigned char *) src;
	i = 0;
	if (ddest < ssrc)
	{
		while (i < n)
		{
			ddest[i] = ssrc[i];
			i++;
		}
	}
	if (ddest > ssrc)
	{
		while (n > 0)
		{
			n--;
			ddest[n] = ssrc[n];
		}
	}
	return (dest);
}
