/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 20:02:51 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:39:59 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memcpy.c
 * @brief Copies memory from source to destination.
 *
 * This function copies `n` bytes from memory area `src_str` to
 * memory area `dest_str`. The memory areas must not overlap.
 *
 * @param dest_str Pointer to the destination memory area.
 * @param src_str Pointer to the source memory area.
 * @param n Number of bytes to copy.
 * @return Pointer to the destination memory area.
 */
#include "libft.h"

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest_str && !src_str)
		return (dest_str);
	d = (unsigned char *)dest_str;
	s = (unsigned const char *)src_str;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest_str);
}
