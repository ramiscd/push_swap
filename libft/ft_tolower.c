/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:29:51 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 12:57:03 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_tolower.c
 * @brief Converts an uppercase character to lowercase.
 *
 * This function takes an integer that represents an ASCII character.
 * If the character is in the range of uppercase letters ('A' to 'Z'),
 * it is converted to its lowercase equivalent. Otherwise, the value
 * is returned unchanged.
 *
 * @param c The character to convert (represented as an `int`).
 * @return The converted lowercase character, or the same character
 * if it was not an uppercase letter.
 *
 * @note This function mimics the behavior of the standard `tolower`
 * function from the C library.
 * @see ft_toupper
 */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
