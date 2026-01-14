/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:12:36 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:41:14 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_putendl_fd.c
 * @brief Writes a string followed by a newline to a file descriptor.
 *
 * This function outputs the string `s` to the given file descriptor `fd`,
 * followed by a newline character.
 *
 * @param s String to write.
 * @param fd File descriptor to write to.
 */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
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
	ft_putchar_fd('\n', fd);
}
