/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daltrad <daltrad@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 19:16:55 by daltrad           #+#    #+#             */
/*   Updated: 2026/09/26 17:38:44 by daltrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const *set, char c)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	find_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i])
	{
		if (!is_in_set(set, s1[i]))
		{
			return (i);
		}
		i++;
	}
	return (i);
}

static size_t	find_end(char const *s1, char const *set, size_t s1_len)
{
	while (s1_len > 0)
	{
		if (!is_in_set(set, s1[s1_len - 1]))
		{
			return (s1_len - 1);
		}
		s1_len--;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1_len;
	size_t	start;
	size_t	len;
	char	*trimmed_str;

	i = 0;
	s1_len = ft_strlen(s1);
	start = find_start(s1, set);
	if (start == s1_len)
		return (ft_strdup(""));
	len = find_end(s1, set, s1_len) - start + 1;
	trimmed_str = malloc((len + 1) * sizeof(char));
	if (!trimmed_str)
		return (NULL);
	while (i < len)
		trimmed_str[i++] = s1[start++];
	trimmed_str[i] = '\0';
	return (trimmed_str);
}
