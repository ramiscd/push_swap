/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 20:49:44 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:38:32 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstsize.c
 * @brief Counts the number of elements in a linked list.
 *
 * This function iterates over the list pointed to by `lst`
 * and returns the total number of elements.
 *
 * @param lst Pointer to the first element of the list.
 * @return Number of elements in the list.
 */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
