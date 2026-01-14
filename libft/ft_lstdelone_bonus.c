/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 22:18:27 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:31:46 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstdelone.c
 * @brief Deletes a single element of a linked list.
 *
 * This function frees the memory of the element `lst` and
 * applies the function `del` to its content.
 *
 * @param lst Element to delete.
 * @param del Function to free the content of the element.
 */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
