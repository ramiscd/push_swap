/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 15:56:13 by youvisa           #+#    #+#             */
/*   Updated: 2025/08/17 13:46:54 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_strjoin.c
 * @brief Concatenates two strings into a new string.
 *
 * This function allocates and returns a new string, which is the
 * result of joining `s1` and `s2`. The returned string is
 * null-terminated.
 *
 * @param s1 First string.
 * @param s2 Second string.
 * @return Pointer to the new concatenated string, or NULL if allocation fails.
 */
#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int		count1;
	int		count2;
	int		total;
	int		i;
	char	*join;

	count1 = ft_strlen(s1);
	count2 = ft_strlen(s2);
	total = count1 + count2;
	join = (char *)malloc((total + 1) * sizeof(char));
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	count2 = 0;
	while (s2[count2] != '\0')
		join[i++] = s2[count2++];
	join[i] = '\0';
	return (join);
}
