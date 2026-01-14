/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 19:29:29 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:49:36 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strmapi.c
 * @brief Applies a function to each character of a string and
 *		  creates a new string.
 *
 * This function applies the function `f` to each character of the
 * string `s`, passing its index as the first argument, and
 * allocates a new string with the results.
 *
 * @param s String to iterate over.
 * @param f Function to apply to each character, with its index.
 * @return Pointer to the new string, or NULL if allocation fails.
 */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	int		i;
	char	*new;

	i = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	len = ft_strlen(s);
	new = malloc(len + 1);
	if (new == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		new[i] = f(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}
