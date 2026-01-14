/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:44:37 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:40:29 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_memset.c
 * @brief Fills memory with a constant byte.
 *
 * This function writes `n` bytes of value `c` to the memory
 * area pointed to by `str`.
 *
 * @param str Pointer to the memory area to fill.
 * @param c Byte value to set (converted to unsigned char).
 * @param n Number of bytes to fill.
 * @return Pointer to the memory area `str`.
 */
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*pstr;
	unsigned int	i;

	pstr = str;
	i = 0;
	while (i < n)
	{
		pstr[i] = c;
		i++;
	}
	return (str);
}
