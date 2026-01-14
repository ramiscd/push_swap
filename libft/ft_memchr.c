/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 21:09:06 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:38:50 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memchr.c
 * @brief Scans memory for a byte value.
 *
 * This function searches the first `n` bytes of the memory area
 * pointed to by `s` for the byte `c`. Returns a pointer to the
 * matching byte, or NULL if not found.
 *
 * @param s Pointer to the memory area to search.
 * @param c Byte value to search for (converted to unsigned char).
 * @param n Number of bytes to examine.
 * @return Pointer to the matching byte, or NULL if not found.
 */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	uc;

	ptr = (unsigned char *)s;
	uc = (unsigned char)c;
	while (n != 0)
	{
		if (*ptr == uc)
		{
			return ((void *)ptr);
		}
		ptr++;
		n--;
	}
	return (NULL);
}
