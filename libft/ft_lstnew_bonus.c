/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 18:20:42 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:35:31 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstnew.c
 * @brief Creates a new linked list element.
 *
 * This function allocates a new element of a linked list and
 * initializes its content with `content`. The `next` pointer
 * is set to NULL.
 *
 * @param content Pointer to the content to store in the new element.
 * @return Pointer to the new element, or NULL if allocation fails.
 */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
