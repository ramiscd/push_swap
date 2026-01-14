/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:42:54 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:40:52 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putchar_fd.c
 * @brief Writes a character to a file descriptor.
 *
 * This function outputs the character `c` to the given file
 * descriptor `fd`.
 *
 * @param c Character to write.
 * @param fd File descriptor to write to.
 */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
