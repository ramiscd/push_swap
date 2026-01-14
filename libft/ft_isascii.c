/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 19:48:17 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:17:46 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isascii.c
 * @brief Checks if a character is an ASCII value.
 * 
 * This function tests whether `c` is a valid ASCII character
 * (value between 0 and 127 inclusive).
 * 
 * @param c Character to check, passed as an int.
 * @return 1 if `c` is an ASCII character, 0 otherwise.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
