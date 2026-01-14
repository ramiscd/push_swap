/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:37:00 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:41:52 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putnbr_fd.c
 * @brief Writes an integer to a file descriptor.
 *
 * This function outputs the integer `n` to the given file
 * descriptor `fd`.
 *
 * @param n Integer to write.
 * @param fd File descriptor to write to.
 */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar_fd(nb + '0', fd);
	else
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd((nb % 10) + '0', fd);
	}
}
