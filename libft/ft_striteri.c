/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 20:22:48 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:46:32 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_striteri.c
 * @brief Applies a function to each character of a string with index.
 *
 * This function applies the function `f` to each character of the
 * string `s`, passing the index of the character as the first argument.
 *
 * @param s String to iterate over.
 * @param f Function to apply to each character, with its index.
 */
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
