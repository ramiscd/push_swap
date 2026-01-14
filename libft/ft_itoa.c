/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 14:12:17 by youvisa           #+#    #+#             */
/*   Updated: 2025/08/17 13:29:26 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_itoa.c
 * @brief Converts an integer to a string.
 *
 * This function allocates and returns a string representing
 * the integer `n`. Handles negative numbers and zero.
 *
 * @param n Integer to convert.
 * @return Pointer to the allocated string, or NULL if allocation fails.
 */
#include "libft.h"

static char	*ft_itoa_zero(void)
{
	char	*res;

	res = malloc(2);
	res[0] = '0';
	res[1] = '\0';
	return (res);
}

static int	ft_count_digits(long n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill_number(char *res, long num, int len, int negative)
{
	while (len > 0)
	{
		res[len + negative - 1] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (negative)
		res[0] = '-';
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	int		negative;
	char	*res;

	negative = 0;
	num = n;
	if (n == 0)
		return (ft_itoa_zero());
	if (num < 0)
	{
		negative = 1;
		num = -num;
	}
	len = ft_count_digits(num);
	res = malloc(len + negative + 1);
	if (!res)
		return (NULL);
	res[len + negative] = '\0';
	ft_fill_number(res, num, len, negative);
	return (res);
}
