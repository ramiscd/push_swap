/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 20:11:19 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:28:16 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isprint.c
 * @brief Checks if a character is printable.
 *
 * This function tests whether `prt` is a printable character,
 * including space (values from 32 to 126 inclusive).
 *
 * @param prt Character to check, passed as an int.
 * @return 1 if `prt` is printable, 0 otherwise.
 */
#include "libft.h"

int	ft_isprint(int prt)
{
	if (prt >= 32 && prt <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
