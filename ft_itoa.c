/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltrad <daltrad@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:45:28 by daltrad           #+#    #+#             */
/*   Updated: 2026/09/26 19:48:52 by daltrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fill_src(char *src, int n)
{
	int	i;

	i = 0;
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
	return (i);
}

char	*ft_itoa(int n)
{
	char	src[12];
	int		i;
	size_t	j;
	char	*dest;

	j = 0;
	if (n == 0)
		return (ft_strdup("0"));
	i = fill_src(src, n);
	if (n < 0)
		dest = malloc((i + 2) * sizeof(char));
	else
		dest = malloc((i + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	if (n < 0)
	{
		dest[j] = '-';
		j++;
	}
	while (i > 0)
		dest[j++] = src[--i];
	dest[j] = '\0';
	return (dest);
}
