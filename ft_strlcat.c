/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltrad <daltrad@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/19 14:36:36 by daltrad           #+#    #+#             */
/*   Updated: 2026/09/25 19:15:51 by daltrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;

	dest_len = 0;
	j = 0;
	while (dest_len < size && dst[dest_len])
		dest_len++;
	i = dest_len;
	if (size == 0)
		return (ft_strlen(src));
	if (dest_len >= size)
		return (ft_strlen(src) + size);
	while (i < size - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(src) + dest_len);
}
