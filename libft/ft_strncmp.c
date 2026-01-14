/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 19:05:14 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:50:50 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strncmp.c
 * @brief Compares two strings up to a given number of characters.
 *
 * This function compares up to `n` characters of the strings `s1`
 * and `s2`. It returns an integer less than, equal to, or greater
 * than zero if `s1` is found, respectively, to be less than, equal
 * to, or greater than `s2`.
 *
 * @param s1 First string to compare.
 * @param s2 Second string to compare.
 * @param n Maximum number of characters to compare.
 * @return Difference between the first differing characters, or 0 if equal.
 */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && s1[i] && s2[i])
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
