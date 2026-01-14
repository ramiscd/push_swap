/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:31:54 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:44:47 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strchr.c
 * @brief Locates the first occurrence of a character in a string.
 *
 * This function searches for the first occurrence of the character `c`
 * in the string `string`. The terminating null byte is considered
 * part of the string.
 *
 * @param string String to search in.
 * @param c Character to locate (converted to unsigned char).
 * @return Pointer to the first occurrence of `c`, or NULL if not found.
 */
#include "libft.h"

char	*ft_strchr(const char *string, int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	while (*string)
	{
		if ((unsigned char)*string == uc)
			return ((char *)string);
		string++;
	}
	if ((unsigned char)*string == uc)
		return ((char *)string);
	return (NULL);
}
