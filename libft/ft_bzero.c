/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 19:31:33 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:07:06 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_bzero.c
 * @brief Sets a block of memory to zero.
 *
 * This function writes `nbyte` zeroed bytes to the memory area
 * starting at `s`.
 *
 * @param s Pointer to the memory area.
 * @param nbyte Number of bytes to set to zero.
 */
#include "libft.h"

void	ft_bzero(void *s, size_t nbyte)
{
	ft_memset(s, 0, nbyte);
}
