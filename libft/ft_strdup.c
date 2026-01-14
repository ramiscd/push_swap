/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 19:10:20 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:45:55 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strdup.c
 * @brief Duplicates a string.
 *
 * This function allocates memory and copies the string `string`
 * into the new memory. The returned string is null-terminated.
 *
 * @param string String to duplicate.
 * @return Pointer to the duplicated string, or NULL if allocation fails.
 */
#include "libft.h"

char	*ft_strdup(const char *string)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *) malloc(ft_strlen((char *)string) * sizeof(char) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (string[i] != '\0')
		{
			ptr[i] = string[i];
			i++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
