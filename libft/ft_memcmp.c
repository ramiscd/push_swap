/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 22:03:44 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:39:36 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memcmp.c
 * @brief Compares two memory areas.
 *
 * This function compares the first `n` bytes of the memory areas
 * `s1` and `s2`. It returns an integer less than, equal to, or
 * greater than zero if `s1` is found, respectively, to be less
 * than, equal to, or greater than `s2`.
 *
 * @param s1 Pointer to the first memory area.
 * @param s2 Pointer to the second memory area.
 * @param n Number of bytes to compare.
 * @return Difference between the first differing bytes, or 0 if equal.
 */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	while (n != 0)
	{
		if (*str1 != *str2)
		{
			return (*str1 - *str2);
		}
		str1++;
		str2++;
		n--;
	}
	return (0);
}
