/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:56:34 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:07:28 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_calloc.c
 * @brief Allocates zero-initialized memory.
 *
 * This function allocates memory for `nitem` elements of `size` bytes
 * each and initializes all bytes to zero.
 *
 * @param nitem Number of elements to allocate.
 * @param size Size in bytes of each element.
 * @return Pointer to the allocated memory, or NULL if allocation fails.
 */
#include "libft.h"

void	*ft_calloc(size_t nitem, size_t size)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)malloc(nitem * size);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < nitem * size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
