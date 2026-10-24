/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltrad <daltrad@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 09:31:05 by daltrad           #+#    #+#             */
/*   Updated: 2026/09/25 19:03:09 by daltrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*bytes_alloc;
	size_t	total;

	total = n * size;
	if (n != 0 && total / n != size)
		return (NULL);
	bytes_alloc = malloc(total);
	if (!bytes_alloc)
		return (NULL);
	ft_bzero(bytes_alloc, total);
	return (bytes_alloc);
}
