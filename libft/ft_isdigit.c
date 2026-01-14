/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:45:44 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:25:10 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_isdigit.c
 * @brief Checks if a character is a digit.
 *
 * This function tests whether `num` is a decimal digit
 * ('0' through '9').
 *
 * @param num Character to check, passed as an int.
 * @return 1 if `num` is a digit, 0 otherwise.
 */
#include "libft.h"

int	ft_isdigit(int num)
{
	if (num >= '0' && num <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
