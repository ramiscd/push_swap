/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 21:04:42 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:04:28 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_atoi.c
 * @brief Converts a string to an integer.
 *
 * This function converts the initial portion of the string pointed
 * to by `str` to its integer representation. It discards any
 * leading whitespace characters (such as space, tab, newline,
 * carriage return, vertical tab, and form feed). An optional sign
 * (`+` or `-`) is also supported.
 * The conversion stops when a non-digit character is encountered.
 *
 * @param str The string to convert.
 * @return The integer value represented by the string, taking into
 * account the optional leading sign. Returns `0` if no valid
 * conversion could be performed.
 */
#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	i;
	int				signal;
	int				res;

	i = 0;
	signal = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
			i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * signal);
}
