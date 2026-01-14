/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 23:15:25 by rdamasce          #+#    #+#             */
/*   Updated: 2025/08/17 13:34:21 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @file ft_lstmap.c
 * @brief Creates a new list by applying a function to each element.
 *
 * This function iterates over the list `lst` and applies the function `f`
 * to the content of each element. It creates a new list resulting from
 * successive applications of `f`. If allocation fails, `del` is used
 * to free the new content and the new list.
 *
 * @param lst Pointer to the first element of the list.
 * @param f Function to apply to each element's content.
 * @param del Function to free the content of an element if needed.
 * @return Pointer to the new list, or NULL if allocation fails.
 */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_lst;
	void	*new_content;

	if (!lst || !f)
		return (NULL);
	new_node = NULL;
	new_lst = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
