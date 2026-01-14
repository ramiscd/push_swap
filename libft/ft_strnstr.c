/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 20:40:26 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:51:50 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strnstr.c
 * @brief Locates a substring in a string within a length limit.
 *
 * This function searches for the first occurrence of the string
 * `little` in the string `big`, examining at most `len` characters.
 * If `little` is empty, `big` is returned.
 *
 * @param big String to search in.
 * @param little Substring to search for.
 * @param len Maximum number of characters to search.
 * @return Pointer to the beginning of the substring in `big`,
 * 		   or NULL if not found.
 */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[0])
		return ((char *)big);
	while (i < len && big[i])
	{
		if (little[0] == big[i])
		{
			j = 1;
			while ((little[j] == big[i + j]) && little[j] && (i + j) < len)
				j++;
			if (little[j] == 0)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
