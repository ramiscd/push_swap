/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 20:45:45 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:55:01 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_substr.c
 * @brief Creates a substring from a string.
 *
 * This function allocates and returns a substring from `s`,
 * starting at index `start` and with maximum length `len`.
 *
 * @param s Original string.
 * @param start Starting index of the substring.
 * @param len Maximum length of the substring.
 * @return Pointer to the new substring, or NULL if allocation fails.
 */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	size_t			max_len;

	if (start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	max_len = ft_strlen(s) - start;
	if (len < max_len)
	{
		max_len = len;
	}
	str = (char *) malloc((max_len + 1) * sizeof(char));
	if (!str)
	{
		return (NULL);
	}
	ft_strlcpy(str, s + start, max_len + 1);
	return (str);
}
