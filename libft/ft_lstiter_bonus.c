/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 23:02:55 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:33:15 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstiter.c
 * @brief Iterates over a linked list and applies a function.
 *
 * This function applies the function `f` to the content of each
 * element of the list pointed to by `lst`.
 *
 * @param lst Pointer to the first element of the list.
 * @param f Function to apply to the content of each element.
 */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
