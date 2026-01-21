/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:38:46 by rdamasce          #+#    #+#             */
/*   Updated: 2026/01/20 22:46:30 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node *node_new(int value)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = -1;
	node->next = NULL;
	return (node);
}

void node_add_back(t_node **stack, t_node *new)
{
	t_node *tmp;

	if (!stack || !new)
		return;
	if (*stack == NULL)
	{
		*stack = new;
		return;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

void stack_print(t_node *stack)
{
	while (stack)
	{
		printf("[%d:%d] ", stack->value, stack->index);
		stack = stack->next;
	}
	printf("\n");
}

int stack_size(t_node *stack)
{
	int size;

	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}
