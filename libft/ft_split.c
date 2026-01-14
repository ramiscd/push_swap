/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 20:58:54 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:44:13 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_split.c
 * @brief Splits a string into an array of strings.
 *
 * This function splits the string `s` into substrings separated
 * by the character `c`. The resulting array of strings is
 * terminated by a NULL pointer.
 *
 * @param s String to split.
 * @param c Delimiter character.
 * @return Pointer to the array of strings, or NULL if allocation fails.
 */
#include "libft.h"

static size_t	count_words(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			len++;
			i++;
			while (str[i] != c && str[i])
				i++;
		}
		else
			i++;
	}
	return (len);
}

static char	**free_spl(char **spl)
{
	size_t	i;

	i = 0;
	if (!spl)
		return (0);
	while (spl[i])
		free (spl[i++]);
	free (spl);
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**spl;
	size_t	i;
	size_t	start;
	size_t	word;

	spl = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!spl)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		start = i;
		while (s[i] != c && s[i])
			i++;
		if (i > start)
		{
			spl[word] = ft_substr(s, start, i - start);
			if (!spl[word++])
				return (free_spl(spl));
		}
	}
	return (spl[word] = NULL, spl);
}
