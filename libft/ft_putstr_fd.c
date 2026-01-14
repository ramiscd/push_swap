/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:54:46 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:42:07 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putstr_fd.c
 * @brief Writes a string to a file descriptor.
 *
 * This function outputs the string `s` to the given file descriptor `fd`.
 *
 * @param s String to write.
 * @param fd File descriptor to write to.
 */
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
