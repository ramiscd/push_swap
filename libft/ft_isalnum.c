/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:55:45 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:09:00 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isalnum.c
 * @brief Checks if a character is alphanumeric.
 *
 * This function tests whether `numc` is a digit or a letter
 * (uppercase or lowercase).
 *
 * @param numc Character to check, passed as an int.
 * @return 1 if `numc` is alphanumeric, 0 otherwise.
 */
#include "libft.h"

int	ft_isalnum(int numc)
{
	if ((numc >= '0' && numc <= '9')
		|| (numc >= 'a' && numc <= 'z')
		|| (numc >= 'A' && numc <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
