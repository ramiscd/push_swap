/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:20:31 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 12:55:30 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_toupper.c
 * @brief Converts a lowercase character to uppercase.
 *
 * This function takes an integer that represents an ASCII character.
 * If the character is in the range of lowercase letters ('a' to 'z'),
 * it is converted to its uppercase equivalent. Otherwise, the value
 * is returned unchanged.
 *
 * @param c The character to convert (represented as an `int`).
 * @return The converted uppercase character, or the same character
 * if it was not a lowercase letter.
 *
 * @note This function mimics the behavior of the standard `toupper`
 * function from the C library.
 * @see ft_tolower
 */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
