/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 23:10:44 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:30:12 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_front.c
 * @brief Adds a new element at the beginning of a list.
 *
 * This function inserts the element `new` at the start of the
 * linked list pointed to by `lst`.
 *
 * @param lst Pointer to the first element of the list.
 * @param new Element to add at the beginning of the list.
 */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
