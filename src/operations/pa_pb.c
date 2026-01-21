/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:43:35 by rdamasce          #+#    #+#             */
/*   Updated: 2026/01/20 22:46:05 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_node **from, t_node **to)
{
	t_node *tmp;

	if (!from || !*from)
		return;

	tmp = *from;
	*from = tmp->next;

	tmp->next = *to;
	*to = tmp;
}

void	pa(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	write(1, "pb\n", 3);
}
