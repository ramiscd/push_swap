/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 22:10:08 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:53:38 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strrchr.c
 * @brief Locates the last occurrence of a character in a string.
 *
 * This function searches for the last occurrence of the character `c`
 * in the string `string`. The terminating null byte is considered
 * part of the string.
 *
 * @param string String to search in.
 * @param c Character to locate (converted to unsigned char).
 * @return Pointer to the last occurrence of `c`, or NULL if not found.
 */
#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	char			*ptr;
	unsigned char	uc;

	uc = (unsigned char)c;
	ptr = NULL;
	while (*string)
	{
		if ((unsigned char)*string == uc)
		{
			ptr = (char *)string;
		}
		string++;
	}
	if (uc == '\0')
		return ((char *)string);
	return (ptr);
}
