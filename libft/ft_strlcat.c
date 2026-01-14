/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 21:14:59 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:47:13 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlcat.c
 * @brief Concatenates two strings with size limitation.
 *
 * This function appends the string `src` to the end of `dest`,
 * ensuring that the total length does not exceed `size - 1`.
 * The result is null-terminated.
 *
 * @param dest Destination string buffer.
 * @param src Source string to append.
 * @param size Total size of the destination buffer.
 * @return The total length of the string it tried to create
 *         (initial length of dest plus length of src).
 */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	size_dest;
	size_t	size_src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	if (size <= size_dest)
		return (size_src + size);
	while (i < (size - size_dest - 1) && src[i])
	{
		dest[size_dest + i] = src[i];
		i++;
	}
	dest[size_dest + i] = 0;
	return (size_dest + size_src);
}
