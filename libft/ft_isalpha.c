/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:24:44 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:12:51 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isalpha.c
 * @brief Checks if a character is alphabetic.
 *
 * This function tests whether `n` is a letter (uppercase or lowercase).
 *
 * @param n Character to check, passed as an int.
 * @return 1 if `n` is alphabetic, 0 otherwise.
 */
#include "libft.h"

int	ft_isalpha(int n)
{
	if ((n >= 'a' && n <= 'z') || (n >= 'A' && n <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
