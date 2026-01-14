/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 20:53:57 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:47:54 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcpy.c
 * @brief Copies a string into a buffer with size limit.
 *
 * This function copies up to `size - 1` characters from the string
 * `src` to `dest`, null-terminating the result.
 *
 * @param dest Destination buffer.
 * @param src Source string to copy.
 * @param size Total size of the destination buffer.
 * @return Length of `src`.
 */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_src;

	i = 0;
	size_src = ft_strlen(src);
	if (!size)
		return (size_src);
	i = 0;
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = 0;
	return (size_src);
}
