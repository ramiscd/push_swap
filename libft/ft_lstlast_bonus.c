/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 21:22:19 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:33:58 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstlast.c
 * @brief Returns the last element of a linked list.
 *
 * This function returns a pointer to the last element of the
 * list pointed to by `lst`.
 *
 * @param lst Pointer to the first element of the list.
 * @return Pointer to the last element, or NULL if the list is empty.
 */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}
