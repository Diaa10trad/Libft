/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltrad <daltrad@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 10:26:37 by daltrad           #+#    #+#             */
/*   Updated: 2026/09/25 18:52:43 by daltrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*dest;
	size_t	s_len;

	i = 0;
	s_len = ft_strlen(s);
	dest = malloc((s_len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[s_len] = '\0';
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	return (dest);
}
