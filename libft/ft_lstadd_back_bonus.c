/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:05:55 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:29:45 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstadd_back.c
 * @brief Adds a new element at the end of a list.
 *
 * This function appends the element `new` at the end of the
 * linked list pointed to by `lst`.
 *
 * @param lst Pointer to the first element of the list.
 * @param new Element to add at the end of the list.
 */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	if (!last)
		return ;
	last->next = new;
}
