/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltrad <daltrad@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:44:51 by daltrad           #+#    #+#             */
/*   Updated: 2026/09/25 18:43:40 by daltrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	cc;
	int				last;

	cc = (unsigned char) c;
	last = ft_strlen(s);
	while (last >= 0)
	{
		if ((unsigned char)s[last] == cc)
			return ((char *)&s[last]);
		last--;
	}
	return (NULL);
}
