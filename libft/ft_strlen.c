/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:32:23 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:48:16 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strlen.c
 * @brief Computes the length of a string.
 *
 * This function returns the number of characters in the string `str`,
 * excluding the terminating null byte.
 *
 * @param str String whose length is to be computed.
 * @return Number of characters in `str`.
 */
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
