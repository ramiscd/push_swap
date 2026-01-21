/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 22:38:55 by rdamasce          #+#    #+#             */
/*   Updated: 2026/01/20 22:46:33 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_is_sorted(t_node *stack)
{
	if (!stack)
		return (1);

	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	sort_two(t_node **a)
{
	if ((*a)->value > (*a)->next->value)
		sa(a);
}

void	sort_three(t_node **a)
{
	int x;
	int y;
	int z;

	x = (*a)->value;
	y = (*a)->next->value;
	z = (*a)->next->next->value;

	if (x > y && y < z && x < z)
		sa(a);
	else if (x > y && y > z)
	{
		sa(a);
		rra(a);
	}
	else if (x > y && y < z && x > z)
		ra(a);
	else if (x < y && y > z && x < z)
	{
		sa(a);
		ra(a);
	}
	else if (x < y && y > z && x > z)
		rra(a);
}

int	find_min(t_node *stack)
{
	int min;

	min = stack->value;
	while (stack)
	{
		if (stack->value < min)
			min = stack->value;
		stack = stack->next;
	}
	return (min);
}

int	find_position(t_node *stack, int value)
{
	int i;

	i = 0;
	while (stack)
	{
		if (stack->value == value)
			return (i);
		i++;
		stack = stack->next;
	}
	return (-1);
}

void	sort_five(t_node **a, t_node **b)
{
	int min;
	int pos;
	int size;

	while (stack_size(*a) > 3)
	{
		min = find_min(*a);
		pos = find_position(*a, min);
		size = stack_size(*a);

		if (pos <= size / 2)
		{
			while ((*a)->value != min)
				ra(a);
		}
		else
		{
			while ((*a)->value != min)
				rra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}


