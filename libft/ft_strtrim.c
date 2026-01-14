/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 19:47:17 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:54:39 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strtrim.c
 * @brief Trims characters from the start and end of a string.
 *
 * This function removes all characters in `set` from the beginning
 * and end of the string `s1`, returning a newly allocated trimmed string.
 *
 * @param s1 String to trim.
 * @param set Set of characters to remove from the ends of `s1`.
 * @return Pointer to the new trimmed string, or NULL if allocation fails.
 */
#include "libft.h"

int	is_in_set(char c, char const *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		start;
	int		end;
	int		size;
	int		i;

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = ft_strlen((char *)s1) - 1;
	while (end >= start && is_in_set(s1[end], set))
		end--;
	size = end - start + 1;
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
